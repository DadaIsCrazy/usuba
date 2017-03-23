open Usuba_AST
open Utils
open Rename

exception Undeclared of string

(* Removes tuples of 1 element *)
module Simplify_tuples = struct

  let rec simpl_tuple t =
    match t with
    | Tuple l -> if List.length l = 1 then List.nth l 0
                 else Tuple(List.map simpl_tuple l)
    | Fun(f,l) -> Fun(f,List.map simpl_tuple l)
    | _ -> t
                 
  let simpl_tuples_def (def: def) : def =
    match def with
    | Single(name,p_in,p_out,p_var,body) ->
       Single(name, p_in, p_out, p_var,
              List.map (fun (p,e) -> (p,simpl_tuple e)) body)
    | _ -> unreached ()
                     
  let simplify_tuples (p: prog) : prog =
    List.map simpl_tuples_def p
end

(* Split tuples into atomic operations, if possible *)
module Split_tuples = struct
  let real_split_tuple (p: pat) (l: expr list) : deq =
    List.map2 (fun l r -> [l],r) p l
               
  let split_tuples_deq (body: deq) : deq =
    List.flatten (List.map
                    (fun (p,e) -> match e with
                                  | Tuple l -> real_split_tuple p l
                                  | _ -> [p,e])
                    body)
                 
  let split_tuples_def (def: def) : def =
    match def with
    | Single(name,p_in,p_out,p_var,body) ->
       Single(name, p_in, p_out, p_var, split_tuples_deq body)
    | _ -> unreached ()
                 
  let split_tuples (p: prog) : prog =
    List.map split_tuples_def p
end

(* ************************************************************************** *)

let rec expand_intn (id: ident) (n: int) : ident list =
  let rec aux i =
    if i > n then []
    else (id ^ (string_of_int i)) :: (aux (i+1))
  in aux 1
         
let expand_intn_typed (id: ident) (n: int) (ck: clock) =
  List.map (fun x -> (x,Bool,ck)) (expand_intn id n)
         
let expand_intn_pat (id: ident) (n: int) : left_asgn list =
  List.map (fun x -> Ident x) (expand_intn id n)
         
let rec expand_intn_expr (id: ident) (n: int option) : expr =
  match n with
  | Some n -> Tuple(List.map (fun x -> Var x) (expand_intn id n))
  | None -> Var id


let gen_tmp =
  let cpt = ref 0 in
  fun () -> incr cpt;
            "_tmp" ^ (string_of_int !cpt) ^ "_"

(* Note that when this function is called, Var have already been normalized *)
let get_expr_size env_fun l =
  match l with
  | Const _ | Var _ | Log _ | Not _ -> 1
  | Tuple l -> List.length l
  | Fun(f,_) -> (match env_fetch env_fun f with
                 | Some (_,v) -> v
                 | None -> if contains f "print" then 1
                           else raise (Error (format_exn __LOC__
                                                         "Undeclared " ^ f)))
  | _ -> raise (Error (format_exn __LOC__ "Not implemented yet"))

(* flatten_expr removes nested tuples *)
let rec flatten_expr (l: expr list) : expr list =
  match l with
  | [] -> []
  | hd::tl -> (match hd with
               | Tuple l -> flatten_expr l
               | _ -> [ hd ]) @ (flatten_expr tl)

(* A primitive expression doesn't need to be rewritten in Tuples or fun calls *)
let rec is_primitive e =
  match e with
  | Const _ | Var _  -> true
  | Tuple l -> List.fold_left (&&) true (List.map is_primitive l)
  | _ -> false

(* ************************************************************************** *)
                

let rec remove_call env_var env_fun e : deq * expr =
  let (deq,e') = norm_expr env_var env_fun e in

  if is_primitive e' then
    deq, e'
  else 
    let tmp = expand_intn (gen_tmp ()) (get_expr_size env_fun e') in
    let left = List.map (fun x -> Ident x) tmp in

    deq @ [left,e'], Tuple (List.map (fun x -> Var x) tmp)

and remove_calls env_var env_fun l : deq * expr list =
  let pre_deqs = ref [] in
  let l' = List.map
             (fun e ->
              
              let (deq,e') = norm_expr env_var env_fun e in
              pre_deqs := !pre_deqs @ deq;

              if is_primitive e' then
                [ e' ]
              else
                let tmp = expand_intn (gen_tmp ()) (get_expr_size env_fun e') in
                let left = List.map (fun x -> Ident x) tmp in
                pre_deqs := !pre_deqs @ [left,e'];
                
                List.map (fun x -> Var x) tmp)
             l in
  !pre_deqs, flatten_expr (List.flatten l')
    

and norm_expr env_var env_fun (e: expr) : deq * expr = 
  let pre_deqs = ref [] in
  let normalized_e =
    match e with
    | Const c -> Const c
    | Var id  -> ( match env_fetch env_var id with
                   | Some n when n > 1 -> expand_intn_expr id (env_fetch env_var id)
                   | _ -> Var id )
    | Field(Var id, n) -> Var (id ^ (string_of_int n))
    | Tuple (l) ->
       let (deqs,l') = remove_calls env_var env_fun l in
       pre_deqs := deqs;
       Tuple l'
    | Fun(f,l) ->
       let (deqs,l') = remove_calls env_var env_fun l in
       pre_deqs := deqs;
       Fun(f, l')
    | Log(op,x1,x2) ->
       let (deqs1, x1') = remove_call env_var env_fun x1 in
       let (deqs2, x2') = remove_call env_var env_fun x2 in
       pre_deqs := deqs1 @ deqs2;
       ( match x1', x2' with
         | Tuple l1,Tuple l2 -> Tuple(List.map2 (fun x y -> Log(op,x,y)) l1 l2)
         | _ -> Log(op,x1',x2'))
    | Not e ->
       let (deqs,e') = remove_call env_var env_fun e in
       pre_deqs := deqs;
       ( match e' with
         | Tuple l -> Tuple(List.map (fun x -> Not x) l)
         | _ -> Not e' )
    | _ -> raise (Invalid_AST (format_exn __LOC__
                                          "Invalid expr")) in
  !pre_deqs, normalized_e

let norm_pat env_var (pat: pat) : pat =
  List.flatten
    (List.map
       (fun x -> match x with
                 | Ident id -> (match env_fetch env_var id with
                                | Some size ->
                                   if size > 1 then expand_intn_pat id size
                                   else [ Ident id ]
                                | None -> [ Ident id ]) (* undeclared bool *)
                 | Dotted(Ident id,i) -> [Ident (id ^ (string_of_int i)) ]
                 | _ -> raise (Invalid_AST
                                 (format_exn __LOC__
                                             "Illegal array access"))) pat)
    
let norm_deq env_var env_fun (body: deq) : deq =
  List.flatten
    (List.map
       (fun (p,e) ->
        let p'= norm_pat env_var p in
        let (expr_l, e') = norm_expr env_var env_fun e in
        expr_l @ [p',e'])
       body)
  

let norm_p (p: p) : p =
  List.flatten
    (List.map
       (fun (id,typ,ck) ->
        match typ with
        | Bool    -> [ id,Bool,ck ]
        | Int n   -> expand_intn_typed id n ck
        | Nat n   -> raise (Invalid_AST
                              (format_exn __LOC__
                                          "Illegal nat"))
        | Array _ -> raise (Invalid_AST
                              (format_exn __LOC__
                                          "Illegal Array"))) p)

let norm_def env_fun (def: def) : def =
  match def with
  | Single(name,p_in,p_out,p_var,body) ->
      let env_var = Hashtbl.create 10 in
      env_add_var p_in env_var;
      env_add_var p_out env_var;
      env_add_var p_var env_var;
      env_add_fun name p_in p_out env_fun;
      Single(name, norm_p p_in, norm_p p_out, norm_p p_var,
             norm_deq env_var env_fun body)
  | _ -> raise (Invalid_AST (format_exn __LOC__
                                        "Illegal non-Single def"))

let print title body =
  if false then
    begin
      print_endline title;
      if false then print_endline (Usuba_print.prog_to_str body)
    end

(* Note: the print actually if the boolean if the function "print" above 
         are set to true (or at least the first one) *)
let norm_prog (prog: prog)  =
  let env_fun = Hashtbl.create 10 in
  print "INPUT:" prog;
  
  let tables_converted = Convert_tables.convert_tables prog in
  print "TABLES CONVERTED:" tables_converted;
  
  let perm_expanded = Expand_permut.expand_permut tables_converted in
  print "PERM EXPANDED:" perm_expanded;
  
  let array_expanded = Expand_array.expand_array perm_expanded in
  print "ARRAYS EXPANDED:"  array_expanded;
  
  let renamed_prog = rename_prog array_expanded in
  print "RENAMED:" renamed_prog;
  
  let pre_normalized = List.map (norm_def env_fun) renamed_prog in
  print "PRE NORMALIZED:" pre_normalized;
  
  let tuples_splitted = Split_tuples.split_tuples pre_normalized in
  print "TUPLES SPLITTED:" tuples_splitted;
  
  let tuples_simpl = Simplify_tuples.simplify_tuples tuples_splitted in
  print "TUPLES SIMPLIFIED:" tuples_simpl;
  
  let optimized = tuples_simpl in (*Optimize.opt_prog tuples_simpl in*)
  print "OPTIMIZED:" optimized;
  optimized
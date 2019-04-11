open Usuba_AST
open Basic_utils
open Utils
open Nodes_to_jasmin
       
let prog_to_jasmin (orig:prog) (prog:prog) (conf:config) (filename:string) : string =
  
  let entry = List.(def_to_jazz (nth prog.nodes (length prog.nodes -1))
                             conf.arr_entry true conf) in
  let prog_jasmin = map_no_end (fun x -> def_to_jazz x false false conf) prog.nodes in

Printf.sprintf 
"/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file \"%s\" (included below). */

#include \"JASMIN_%s\"

/* auxiliary functions */
%s

/* main function */
%s


/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

%s

*/
 "
  filename
  (c_header conf.archi)
  (join "\n\n" prog_jasmin)
  entry
  (Usuba_print.prog_to_str orig)

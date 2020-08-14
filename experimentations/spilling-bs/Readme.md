Just a simple script to compute approximatively how much spilling is in some bitsliced codes (generated by Usubac) when bitslice scheduling is disabled.

The last time I ran that script, I got the following results (Clang 7.0.0):

```
       des: 0.41 (6081 / 14822)
     ascon: 0.42 (20551 / 49174)
      gift: 0.54 (19502 / 36289)
   present: 0.24 (3533 / 14967)
 rectangle: 0.26 (2980 / 11582)
   serpent: 0.41 (22581 / 54672)
```
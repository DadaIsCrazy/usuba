An Usuba Vsliced implementation of AES
===

In a perfect world, `aes_generic.ua` should work for either V, H and
bitslicing. This folder is only for testing vslicing for now though.

## Verification

As you can see in the main (`main.c`), the transposition seems
somewhat not ideal: I'm using this `reorder` function to obtain the
correct layout; that sounds wrong.

If you need some command lines:

    ./usubac -V -light-inline -o experimentations/aes/vslice/aes.c experimentations/aes/vslice/aes_generic.ua
    gcc -I ../../../arch main.c
    ./a.out

This should print `AES vslice seems OK.`. Note that it's only running AES on a fixed single block; meaning there is a possibility that it's not actually OK, but this will be enough for now.

(The example I'm using is inspired from [those slides](https://kavaliro.com/wp-content/uploads/2014/03/AES.pdf); many thanks to the author)


## Performances

`speed.c` computes the performance of this AES (masked and unmasked).

Command lines:

    ./usubac -V -light-inline -o experimentations/aes/vslice/aes.c experimentations/aes/vslice/aes_generic.ua
    ./usubac -ua-masked -compact -V -light-inline -o experimentations/aes/vslice/aes_masked.c experimentations/aes/vslice/aes_generic.ua
    gcc -I ../../../arch speed.c
    ./a.out
    # Remove "#define MASKING_ORDER" from speed.c, then
    gcc -I ../../../arch speed.c
    ./a.out

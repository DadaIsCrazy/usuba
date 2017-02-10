Implantation et optimisation des primitives cryptographiques, chapitre 3 : Bitslice, Thomas Pornin, 2001
===

Dans ce chapitre, Pornin pr�sente comment impl�menter des algorithmes bitslice.  

Premi�rement, les donn�es doivent etre converties de leur repr�sentation standart � une repr�sentation bitslice (�tape que Pornin appelle *orthogonalisation des donn�es*). Ceci peut �tre fait en `4log(n)` op�rations (pour `n*n` bits), grace � un algorithme de transposition de matrices de Knuth (The Art of Computer Programming, vol. 3).

Deuxi�mement, les tables (S-box) doivent etre converties en circuits logiques. Pour ce faire, Pornin utilise des *Binary Decision Diagrams* (BDD), qui permettent de repr�senter les circuits g�n�riques correspondant aux S-box, que l'on peut ensuite otpimiser. (technique proche de ce que Kwan et Biham pr�sentent).  
Cependant, bien que cette technique permette de g�n�rer des circuits courts, elle ne g�n�re pas les circuits optimaux � coup s�r.
*Note : je n'ai toujours pas bien compris comment ca marche. A revoir.*

Pornin pr�sente ensuite *bcs*, un outil permettant d'�crire du code bitslic� qu'il a d�velopp�, y compris les diverses optimisations utilis�es par celui-ci.  
Les codes C g�n�r�s par *bsc* sont tr�s long (quelques Mo pour un DES), et utilisent beaucoup de variables, ce qui est potentiellement mal optimis� par le compilateur. Introduire de nouvelles constructions au sein du language d'entr�e de *bsc* pourrait corriger certains de ces probl�mes.

Pour finir, Pornin d�crit un nouvel algorithme, __FBC__, qui se veut tr�s rapide, afin de chiffrer (et d�chiffrer) des disques durs en temps r�el.

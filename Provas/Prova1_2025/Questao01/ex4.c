#include <stdio.h>
#include "prova1.h"


int verifica(int a, int b, int c) {

// numero --> 0, minuscula --> 1, maiuscula --> 2, outro --> -1)

int A, B, C;

A = tipoChar(a);
B = tipoChar(b);
C = tipoChar(c);

if (A == -1 || B == -1 || C == -1)
    return 0; 
else 
    return 1;
}



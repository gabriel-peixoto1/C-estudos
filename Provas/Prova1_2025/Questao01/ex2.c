#include <stdio.h>

int contemApenasUmNumero (int a, int b, int c) {   //'caracter' = int, porque cada caracter vai ter um representante inteiro na ASCII.
    
    if (a >= 48 && a <= 57 && (b < 48 || b > 57) && (c < 48 || c > 57))
        return 1;
    else if (b >= 48 && b <= 57 && (a < 48 || a > 57) && (c < 48 || c > 57))
        return 1; 
    else if (c >= 48 && c <= 57 && (a < 48 || a > 57) && (b < 48 || b > 57))
        return 1;

    else 
        return 0;

}
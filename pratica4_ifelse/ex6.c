#include <stdio.h>

int main () {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) printf("Valores invalidos");
    else if (a >= b + c || b >= a + c || c >= a + b ) printf ("Triangulo invalido");
    else if (a == b && b == c) printf("Triangulo equilatero");
    else if (a != b && b != c) printf("Triangulo escaleno");
    else if ((a == b && a != c) || (a == c && b != c) || (b == c && a != c)) printf("Triangulo Isosceles");
    

    return 0;
}

// de primeira papai.
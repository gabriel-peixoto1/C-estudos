/* Escreva uma função recursiva que calcule a soma dos cubos dos primeiros n números 
naturais positivos, ou seja:
S = 1^3 + 2^3 + 3^3 + ⋯ + n^3

A função deve ter o seguinte protótipo:

int somaCubos(int n);

Exemplo:

Para n = 3, a função deve retornar (não precisa imprimir!):
1^3+2^3+3^3 = 1+8+27 = 36 */

#include <stdio.h>
#include <math.h>

int somaCubos(int n) {

    if(n==0) {
        return 0;
    }
    int temp = somaCubos(n-1);

    return pow(n,3) + somaCubos(n-1);
}

int main() {

    printf("%d",somaCubos(3));

    return 0;
}
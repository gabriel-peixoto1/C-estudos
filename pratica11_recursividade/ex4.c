/* Crie uma função recursiva que calcule e retorne a média aritmética dos elementos de um vetor 
de números inteiros. A função deve considerar todos os n elementos do vetor e pode ter o 
seguinte protótipo:

double mediaVetor(int v[], int n);

    O parâmetro v representa o vetor.
    O parâmetro n representa o número de elementos no vetor.
    A função deve retornar a média como um valor do tipo double.

Exemplo:
Para o vetor v = {4, 6, 8} e n = 3, a função deve retornar:
(4 + 6 + 8) / 3 = 6.0 */

#include <stdio.h>

float somaVetor(int v[], int n) {

    if (n < 0) {
        return 0;
    }

    return v[n-1] + somaVetor(v,(n-1));
}


double mediaVetor(int v[],int n) {

    return (somaVetor(v,n)/n);
}
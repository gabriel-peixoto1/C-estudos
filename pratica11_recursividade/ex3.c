/* Crie uma função recursiva que calcule e retorne a soma dos elementos de um vetor de 
números inteiros. A função deve ter o seguinte protótipo:

int somaVetor(int v[], int n);

    O parâmetro v representa o vetor.
    O parâmetro n representa o número de elementos do vetor (ou seja, o tamanho do vetor).

Exemplo:
Para o vetor v = {1, 2, 3, 4} e n = 4, a função deve retornar:
1 + 2 + 3 + 4 = 10 */

#include <stdio.h>

int somaVetor(int v[], int n) {

    if (n < 0) {
        return 0;
    }

    return v[n-1] + somaVetor(v,(n-1));
}

int main() {

    int v[] = {1,2,3,4,5};
    int n = 5;
    int i;

    printf("%d",somaVetor(v,n));

    return 0;
}
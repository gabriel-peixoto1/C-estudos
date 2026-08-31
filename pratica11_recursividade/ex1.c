/* Escreva um procedimento recursivo que imprima todos os números naturais de N até 0, 
em ordem decrescente.

O procedimento deve ter o seguinte protótipo:

void imprimeNaturais(int N); */

#include <stdio.h>

void imprimeNaturais(int N) {

    if (N<0) {
        return;
    }

    printf("%d\n",N);
    imprimeNaturais(N-1);
}

int main() {

    int n;
    printf("Digite um número: ");
    scanf("%d",&n);

    imprimeNaturais(n);
}
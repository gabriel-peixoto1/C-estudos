/* Escreva um programa que imprima o máximo divisor comum entre 4 números presentes no arquivo 
case.txt. Os números estão armazenados no arquivo de entrada um por linha.

Dica: O MDC pode ser calculado com o algoritmo de Euclides visto em aula. Para calcular o 
máximo divisor comum (MDC) entre dois números de forma iterativa, dado dois números inteiros 
positivos a e b:

    Enquanto b for diferente de zero:
        Calcule o resto r da divisão de a por b
        Atualize a para o valor de b
        Atualize b para o valor de r
    Quando b se tornar zero, o valor de a é o MDC

Aplique este algoritmo para os 4 números lidos do arquivo. */

#include <stdio.h> 
#include <stdlib.h>

int main() {

    FILE *arquivo;
    int numeros[4];
    int r, i;

    arquivo = fopen("case.txt","r");

    for(i=0;i<4;i++) {
        fscanf(arquivo,"%d",&numeros[i]);
    }

    int a = numeros[0];
    int b = numeros[1];
    int c = numeros[2];
    int d = numeros[3];

    while(b!=0) {
        r = a % b;
        a = b; 
        b = r;
    }

    while(d!=0) {
        r = c % d;
        c = d;
        d = r;
    }

    while(c!=0) {
        r = a % c;
        a = c;
        c = r;
    }

    printf("%d",a);

    fclose(arquivo);
    return 0;
}
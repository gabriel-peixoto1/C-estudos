/* Faça um programa que leia a quantidade de números desejada pelo usuário, 
armazene-os dinamicamente e exiba a soma. */ 

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i;
    int soma = 0;

    printf("Quantidade de numeros: ");
    scanf("%d",&n);

    int *numeros = malloc(n*sizeof(int));

    for(i=0;i<n;i++) {
        printf("Digite um numero: ");
        scanf("%d",&numeros[i]);
    }

    for(i=0;i<n;i++) {
        soma = soma + numeros[i];
    }

    printf("O valor da soma eh: %d", soma);

    free(numeros);

    return 0;
}
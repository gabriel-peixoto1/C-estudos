/* Escreva um programa para imprimir a soma e a multiplicação dos cinco caracteres
contidos em "PDS-1", ambos números separados por um espaço.*/

#include <stdio.h>

int main() {
 
    int soma = 'P'+'D'+'S'+'-'+'1';
    int produto = 'P'*'D'*'S'*'-'*'1'; 
    printf("a soma eh: %d\no produto eh: %d",soma,produto);
    return 0;
} 

// ele ja lê as variaveis com seus codigos ao criar uma variavel 'int' e 
// acrescentar as letras.
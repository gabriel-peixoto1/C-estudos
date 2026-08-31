/*Escreva uma função que recebe um número de ponto flutuante como parâmetro e 
retorna o valor de sua parte fracionária, como ponto flutuante. 
Exemplo: se a função receber -3.1416 como parâmetro, ela deve retornar -0.1416.*/

#include <stdio.h>

int main() { 
    float entrada;
    printf("escreva um valor real: ");
    scanf("%f",&entrada);

    float saida = entrada - (int)entrada;
    printf("a parte inteira eh: %f",saida);

    return 0;
}
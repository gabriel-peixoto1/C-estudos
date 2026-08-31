/*Escreva uma função que recebe um número de ponto flutuante como parâmetro e 
retorna o valor de sua parte inteira, representado como ponto flutuante. 
Exemplo: se a função receber -3.141592 como parâmetro, ela deve retornar -3.0.*/

#include <stdio.h>

int main() { 
    float entrada;
    printf("escreva um valor real: ");
    scanf("%f",&entrada);

    float saida = (int)entrada;
    printf("a parte inteira eh: %.1f",saida);

    return 0;
}
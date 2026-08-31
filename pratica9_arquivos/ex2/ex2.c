/* Escreva um programa que leia um arquivo case.txt. A primeira linha do arquivo representa 
o início do intervalo, a segunda linha representa o fim do intervalo, e a terceira o passo, 
referentes a um intervalo de temperatura em graus Celsius. Seu programa deve imprimir n linhas 
contendo uma tabela de conversão de graus Celsius para Fahrenheit e Kelvin, cada linha deve 
conter três campos correspondentes às três escalas, respectivamente.

A conversão de Celsius para Fahrenheit é dada por F = C∗(9/5) + 32 e a conversão de Celsius 
para Kelvin é dada por K = C + 273.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *arquivo;
    int inicio;
    int final;
    int passo;
    int i;

    arquivo = fopen("case.txt","r");

    for(i=0;i<3;i++) {
        fscanf(arquivo,"%d %d %d",&inicio,&final,&passo);
    }

    for(i=inicio;i<=final;i=i+passo) {
        printf("%d %d %d\n",i,((i*9/5)+32),i+273);
    }

    fclose(arquivo);
    return 0;
}
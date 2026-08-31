/* Escreva uma função que recebe dois inteiros, x e y, como parâmetros e 
retorna um ponto flutuante correspondente à divisão do primeiro pelo segundo 
(x dividido por y). A função deve retornar o valor com a parte fracionária.*/

#include <stdio.h>

float DivInts(int x, int y) {

    return (float)x/y;
}

int main() {

    int x;
    printf("valor de x: ");
    scanf("%d",&x);

    int y;
    printf("valor de y: ");
    scanf("%d",&y);

    printf("o valor da divisao eh: %f",DivInts(x,y));
}
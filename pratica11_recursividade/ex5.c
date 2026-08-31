/* Escreva uma função recursiva que receba dois valores inteiros positivos x e y como 
parâmetros e calcule o valor de x^y (x elevado à potência y).A função deve retornar o resultado 
para o programa principal.

Requisitos:
    Considere que x e y são inteiros positivos.
    Não é permitido utilizar a função pow da biblioteca padrão.
    A função deve ter o seguinte protótipo:

int potencia(int x, int y);
Exemplo:
Para x = 2 e y = 3, a função deve retornar 8. */

#include <stdio.h>

int potencia(int x, int y) {

    if (y == 0){
        return 1;
    }

    return x * potencia(x,y-1);
}

int main() {

    int x;
    int y;

    printf("base: ");
    scanf("%d",&x);
    printf("expoente: ");
    scanf("%d",&y);

    printf("potencia: %d",potencia(x,y));
}
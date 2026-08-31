/*
A inversão de uma string em C significa reorganizar seus caracteres na ordem contrária — ou seja, 
o primeiro vira o último, o segundo vira o penúltimo, e assim por diante.


Exercício:
Faça um programa que lê uma string de até 50 caracteres e que imprima a string lida, porém invertida.
Por exemplo:
Entrada: string
Saída: gnirts
*/

#include <stdio.h>
#include <string.h>

int main() {

    char str[51];
    printf("Entrada: ");
    fgets(str, 51, stdin);

    int tamanho = strlen(str);
    int i;
    
    for (i = tamanho - 1; i >= 0; i = i - 1) {
        printf("%c", str[i]);       // para cada iteração do for (lendo a string de trás pra frente), ele vai imprimir uma letra.
    }

    return 0; 
}
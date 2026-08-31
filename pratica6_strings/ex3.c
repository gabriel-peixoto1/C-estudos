/*
Neste exercício, faça um programa que leia uma linha inteira de no máximo 50 caracteres da entrada e
imprima quantas palavras foram lidas.

Não é necessário ser uma palavra que existe em português para ser contabilizada, basta estar 
separada das demais por espaços em branco.

Observação: Neste VPL você vai ter que escrever a sua própria função main. Neste caso, a função 
scanf não é a mais adequada, pois ela só receberá a primeira palavra. Portanto, para realizar a 
leitura, utilize a função fgets.

Dica: Lembre de calcular de forma correta o tamanho da string que foi capturada pela entrada do 
usuario.
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char str[51]; 
    int count = 1;      // o programa conta o número de espaços (não o número de palavras), então já deve começar com um, para o caso de uma única palavra.
    int i;
    fgets(str, 51, stdin);

    for (i = 0; i < 51; i = i + 1) {
        if (str[i] == 32)   // percorre todos os elementos da string e conta os espaços. 
            count = count + 1;
    }

    printf("%d\n",count);

    return 0;
}
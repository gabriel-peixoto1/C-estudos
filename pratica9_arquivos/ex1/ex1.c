/* Escreva um programa que lê um arquivo chamado texto.txt e imprime na tela a linha do 
arquivo com o maior número de caracteres e a quantidade de caracteres dessa linha.
O arquivo texto.txt já está disponível no VPL do Moodle, você deve simplesmente abrí-lo 
utilizando as funções de manipulação de arquivo, como fopen.

Exemplo de Entrada:
Oi
Tudo bem?
Ah, está bem mais ou menos!
O que aconteceu?

Exemplo de Saída:
Ah, está bem mais ou menos!
28  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    FILE *arquivo; 
    int i;
    char frase[100];
    char maiorFrase[100];
    int maiorTamanho = 0;

    arquivo = fopen("texto.txt","r");

    while(fgets(frase,sizeof(frase),arquivo) != NULL) {

        int tamanhoFrase = strlen(frase);   // precisa ficar dentro do laço, senão não vai mudar a cada frase.
        if(tamanhoFrase > maiorTamanho) {
            maiorTamanho = tamanhoFrase;
            strcpy(maiorFrase,frase);       // não tem igualdade para strings. 
        }
    }

    printf("%s", maiorFrase);
    printf("%d", maiorTamanho);

    fclose(arquivo);
    return 0;
}



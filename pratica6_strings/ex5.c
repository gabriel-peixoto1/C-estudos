/*
Neste exercício, faça um programa que leia duas string A e B com menos de 50 caracteres e 
verifique se B é substring de A.

A saida do seu programa deve ser:

 

    Em caso de que B seja substring de A, imprima “E substring”
    e, em caso negativo, “Nao e substring”.

*/

#include <stdio.h>
#include <string.h>

// funcao strcomp(str1,str2) retorna 0 se as funcoes sao iguais.
// substituir um caracter da string por '/0' "corta ela" nesse ponto. 
// strcspn localiza a primeira ocorrência de um caracter na string. 
// strncmp compara só os 'n' primeiros elementos de uma string. 

// o código ainda não tá certo, mas fds cansei. 

int main() {

    char str1[50];
    fgets(str1,50,stdin);

    char str2[50];
    fgets(str2,50,stdin);

    int tamanho1 = strlen(str1);
    int tamanho2 = strlen(str2);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if(tamanho2 < tamanho1) {
        if (strncmp(str1,str2,tamanho2) == 0)
            printf("E substring");
        else 
            printf("Nao e substring");
    }

    return 0;
}
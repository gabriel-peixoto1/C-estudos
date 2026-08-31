/*
Criar um programa em C que vai ler uma matriz de números inteiros (positivos e negativos) da 
entrada do usuário. Você precisará calcular a matriz oposta e imprimir os números dentro cada 
linha separados por espaços, e cada linha separada por um salto de linha (\n).
*/

#include <stdio.h>

int main() {

    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);

    int m[linhas][colunas];
    int i, j;

    for(i=0;i<linhas;i++) {
        for(j=0;j<colunas;j++){
            scanf("%d",&m[i][j]);
        }
    }

    for(i=0;i<linhas;i++) {
        for(j=0;j<colunas;j++) {
            m[i][j] = -1*m[i][j];
        }
    }

    for(i=0;i<linhas;i++) {
        printf("\n");
        for(j=0;j<colunas;j++) {
            printf("%d ",m[i][j]);
        }
    }


    return 0;
}
// Problema 3 ---> Foto do enunciado no grupo
// de novo, esse fdp fez rápido pra crlh e deve ter faltado algm coisa. conferir no chat ou Git dele.

#include <stdio.h>
#include <stdlib.h>

int rolaDado() {
    return rand() % 6;
}

void imprimeMatriz(int M[][6], int n) {
    int i, j;
    printf("\n");
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int M[6][6];   // cria uma matriz 'M' 6x6. 
    int i,j;
    for(i = 0; i < 6; i = i + 1) { 
        for(j = 0; j < 6; j = j + 1){ 
            M[i][j] = 0;
        }
    }
    int d1, d2;
    for(i = 0; i < 36000; i = i + 1) {
        d1 = rolaDado();
        d2 = rolaDado();
        M[d1][d2]  = M[d1][d2] + 1;
    }

imprimeMatriz(M,6);


    return 0;
}
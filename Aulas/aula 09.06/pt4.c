#include <stdio.h>
#include <stdlib.h>

void alocaMatriz2(int ***M, int n, int m) {

    *M = (int **) malloc(n * sizeof(int *)); // alocando um vetor de n ponteiros para int.
    
    for(int i=0;i<n;i++) {
        (*M)[i] = (int *) malloc(m * sizeof(int)); // alocando um vetor de m ints para cada linha.
    }

    // faltou terminar essa porra. olhar no github. 
}
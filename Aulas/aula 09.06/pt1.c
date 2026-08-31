#include <stdio.h>
#include <stdlib.h>

// pensar em uma matriz como sendo um vetor de vetores.
// m[0] (primeira linha) é um vetor de 2 ints.

void main() {

    int n, m, i, j; 
    scanf(" %d %d", &n, &m);

    int **M;
    
    // o primeiro passo é criar um vetor de ponteiros. 

    M = (int **) malloc(n * sizeof(int *)); // alocando um vetor de n ponteiros para int.

    for(i=0;i<n;i++) {
        M[i] = (int *) malloc(m * sizeof(int)); // alocando um vetor de m ints para cada linha.
    }

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
                    
            M[i][j] = i + j; // inicializando a matriz com a soma dos índices.
        }
    }

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d ", M[i][j]); // imprimindo a matriz.
        }
        printf("\n");
    }

}
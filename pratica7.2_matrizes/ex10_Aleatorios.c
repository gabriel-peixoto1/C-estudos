/*
seed = semente;
min = limite inferior para os numeros aleatorios;
max = limite superior para os numeros aleatorios;
n = num linhas;
m = num colunas;
v = matriz;
*/

// preencher uma matriz com numeros aleatorios gerados por uma seed.

#include <stdlib.h>

void preencherpseudoaleatoriamente(int seed,int min, int max,int n, int m, int v[n][m]) {

    // entre 5 e 50: 

    int i,j;
    srand(seed);
    int random = rand();

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            v[i][j] = (random%(max - min)) + (min);
        }
    }
}
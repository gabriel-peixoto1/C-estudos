#include <stdio.h>
#include <unistd.h> // para a função usleep utilizada na Q4
#define TAM_PISTA 30
#define MIN_CARROS 4
#define MAX_CARROS 10 

int avancarCarros(int posicoes[], int numCarros) {

    int i, j;
    int casasPercorridas[numCarros];

    for(i=0; i<numCarros; i++) {
        for(j=0; j<numCarros;j++) {            
            casasPercorridas[i] = posicoes[i] + ((rand() % 3) + 1);
                if(casasPercorridas[j] < 30) {
                    return 1;
                 }
                else {
                    return 0;
                    break;
                }
         }
     }
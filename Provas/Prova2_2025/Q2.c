#include <stdio.h>
#include <unistd.h> // para a função usleep utilizada na Q4
#define TAM_PISTA 30
#define MIN_CARROS 4
#define MAX_CARROS 10 

void mostrarPista(int posicoes[], int numCarros) {
    for (int i = 0; i < numCarros; i++) {
        for (int j = 0; j <= TAM_PISTA; j++) {
            if (j == posicoes[i]) printf("%c", 'A' + i);
            else printf("_");
        }
    printf("\n");
    
    }

    printf("\n");

}
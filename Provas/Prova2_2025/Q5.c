/*
Complete a função main abaixo, de forma que:
1. Sorteia o número de carros que disputará o campeonato,
2. Inicializa o vetor de pontuação do campeonato,
3. Para cada corrida:
    a. Roda a corrida,
    b. Atualiza a pontuação de acordo com o pódio (5 pontos para o vencedor, 3
pontos para o segundo e 1 ponto para o terceiro),
    c. Imprime a pontuação do campeonato após a corrida,
4. Após as 5 corridas, encontra o campeão e imprime na tela.
Observem as sete variáveis já declaradas no início do main.

*/


#include <stdlib.h>
#include <time.h>

#include "corrida.h"

int main() {

    srand(time(NULL));

    int pontosPorCorrida[] = {5, 3, 1};
    int i, j, numCarros, numCorridas = 5;
    int pontuacao[MAX_CARROS], podio[3];

    numCarros = (rand() % 7) + 4; // sorteio do numero de carros que participará.
    printf("O campeonato terá %d carros.\n", numCarros);

    for (i = 0; i < numCarros; i++) {
        pontosPorCorrida[i] = 0; 
    }

    for (i = 0; i < numCorridas; i++) {
        printf("\n---- Corrida %d ----\n\n", i+1);
        corrida(numCarros,podio[3]);

        for (j = 0; j <= 2; j++) {
             pontosPorCorrida[j] = pontosPorCorrida[j] + podio[j]; 
        }

        printf("Pontuação do campeonato após corrida %d:", i+1);
        for (j = 0; j < numCarros; j++) {
            printf(" %c:%d",podio[j],pontosPorCorrida[j]); 
        }
        printf("\n");
        }

    int cmp = 0; // Variável para guardar o campeão
    
    for (i=0;i<numCarros;i++) { 
        if (pontosPorCorrida[i] > pontosPorCorrida[i+1]) 
            cmp = i; 
    }

    printf("Campeao: %c, %d pontos.\n", podio[cmp],pontosPorCorrida[cmp]); 
    
return 0;
}

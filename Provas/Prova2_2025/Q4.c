/*
Complete a função corrida de forma que:
1. Inicialize com zeros as posições dos carros,
2. Simule a próxima iteração da corrida com as funções das questões 1 e 2, até que
ela termine,
3. Calcula o pódio,
4. Imprima o resultado final.
*/
#include<stdio.h>
#define MAX_CARROS 10 

void corrida(int numCarros, int podio[3]) {
    int i, posicoes[MAX_CARROS];        // esse possicoes[MAX_CARROS] é só para criar o vetor posicoes.
    for (i = 0; i < numCarros; i++) {
        posicoes[i] = 0;               // zerar o vetor posicoes.
    }
    while (avancarCarros(posicoes[MAX_CARROS],numCarros) > 0) {
        limpaTela(); // Limpa o conteudo da tela

        mostrarPista(posicoes[MAX_CARROS],numCarros);
        usleep(500000); // Para o programa por 0.5 segundos
    }

    calcularPodio(posicoes[MAX_CARROS],numCarros,podio[3]); 
    printf("Pódio: 1o = %c, 2o = %c, 3o = %c\n",podio[0],podio[1],podio[2]);
}
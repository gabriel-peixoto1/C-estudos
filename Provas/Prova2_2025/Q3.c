/*
Implemente uma função chamada calcularPodio, que será chamada após a corrida
terminar. Ela recebe três parâmetros: a lista de posições dos carros, o número de carros e
um vetor com três posições indicando o pódio. A função possui a seguinte assinatura:
void calcularPodio(int posicoes[], int numCarros, int podio[3]);
Nela, você deve preencher as posições do vetor podio com o primeiro, segundo e terceiro
colocados da corrida. Por exemplo, se há quatro carros com as seguintes posições finais:
'A' = 26, 'B' = 31, 'C' = 28 e 'D' = 24, a função deve preencher o vetor podio
com os valores [1, 2, 0], correspondente aos carros 'B' (1), 'C' (2) e 'A'
(0). Além disso, a função deve marcar os carros que foram para o pódio no vetor
posicoes, substituindo suas posições por -1.

*/


void calcularPodio(int posicoes[], int numCarros, int podio[3]) {
    int i, j;
    for (i=0;i<3;i++) {   
        int maxIndex = 0;
            for (j=0;j<numCarros;j++) { 
                if (posicoes[j] > posicoes[j+1]) { 
                    maxIndex = j;                ; 
                }
            }
        podio[i] = maxIndex;
        posicoes[maxIndex] = -1;               ; 
        }
    }

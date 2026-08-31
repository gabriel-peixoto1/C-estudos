#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// código rascunho, ignorar ele. 



int main() {
    int vetor[10];

    srand(time(NULL)); // inicializa a semente

    // Preencher o vetor com números aleatórios
    for (int i = 0; i < 10; i++) {
        vetor[i] = rand() % 100; // números de 0 a 99
    }

    // Imprimir o vetor
    printf("Vetor gerado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
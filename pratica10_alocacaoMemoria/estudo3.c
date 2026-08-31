/* Faça um programa que:

Leia a quantidade de pessoas.
Para cada pessoa, leia seu nome completo.
Armazene cada nome utilizando apenas a quantidade de memória necessária.
Ao final, exiba todos os nomes cadastrados.
Mostre qual nome possui o maior número de caracteres.
Libere toda a memória utilizada. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i;
    int tamMaiorNome = 0;
    int indiceMaiorNome = 0;

    printf("Digite o número de nomes:");
    scanf("%d",&n);
    getchar();

    char **nomes;
    nomes = malloc(n*sizeof(char*));

    if (nomes == NULL) {
        printf("Erro de alocação!\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        nomes[i] = malloc(100 * sizeof(char));
    }

    for(i=0;i<n;i++) {
        printf("Digite o nome %d: ", i+1);
        fgets(nomes[i], 100, stdin);
    }

    for(i=0;i<n;i++) {
        printf("%s",nomes[i]);
    }

    for(i=0;i<n;i++) {
        if(strlen(nomes[i])>tamMaiorNome){
            tamMaiorNome = strlen(nomes[i]);
            indiceMaiorNome = i;
        }
    }

    printf("Maior nome: %s", nomes[indiceMaiorNome]);
    printf("Caracteres no nome: %d", tamMaiorNome);

    for(i=0;i<n;i++) {
        free(nomes[i]);
    }
    
    free(nomes);

    return 0;
}
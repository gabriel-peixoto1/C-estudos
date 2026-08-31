#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

struct lutador { 
    char *nome; 
    int vitalidade; 
    int dano_maximo; 
}; 
typedef struct lutador Lutador;


int randint(int min, int max) {  
 return min + rand()%(max-min+1); 
} 

// função é de *x, então usar -> ao invés do =.

Lutador *carrega_lutadores(int *n) {
    
    FILE *arquivo;
    char linha[100];
    Lutador lutadores[];
    int i = 0;
    char nome[10];

    arquivo = fopen("lutadores.txt","r");

    fscanf(arquivo,"%d",&n);

    lutadores = malloc((*n)*sizeof(Lutador));

    while(!feof) {
        fgets(linha,sizeof(linha),arquivo);
        strcpy(lutadores[i].nome,strtok(linha," "));  
        lutadores[i].vitalidade = atoi(strtok(NULL," "));
        lutadores[i].dano_maximo = atoi(strtok(NULL, " \n"));
        i++;
    }

    return *lutadores;
}
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    char esporte[20];
    int idade;
    float altura;
} atleta;


int main() {

    atleta atletas[5]; // vetor de estruturas, onde cada posição é um atleta diferente.

    int i; 
    for(i=0;i<5;i++) {
        scanf("%19s %19s %d %f", atletas[i].nome,atletas[i].esporte,&atletas[i].idade,&atletas[i].altura);
    }

    int indiceMaiorIdade = 0;
    int indiceMaiorAltura = 0;

    for(i=0;i<5;i++) {
        if(atletas[i].altura > atletas[indiceMaiorAltura].altura) {
            indiceMaiorAltura = i;
        }
    }

    for(i=0;i<5;i++) {
        if(atletas[i].idade > atletas[indiceMaiorIdade].idade) {
            indiceMaiorIdade = i;
        }
    }

    printf("Mais alto: %s\n",atletas[indiceMaiorAltura].nome);
    printf("Mais velho: %s\n",atletas[indiceMaiorIdade].nome);
    
    return 0;
}


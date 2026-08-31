#include <stdio.h>
#include <string.h>

// INCRÍVEL!!!!!!

typedef struct {
    char nome[16];
    char esporte[16];
    int idade;
    float altura;
} atleta;

int main() {

    atleta atletas[5];
    int i,j;

    for(i=0;i<5;i++) {
        scanf("%s %s %d %f",atletas[i].nome,atletas[i].esporte,&atletas[i].idade,&atletas[i].altura);
    }

    atleta atletasOrd[5];
     
    for(i=0;i<5;i++) {
        int count = 0;
        for(j=0;j<5;j++){
            if(atletas[i].idade < atletas[j].idade) {
                count = count + 1;
            }
        }
        atletasOrd[count].idade = atletas[i].idade;
        strcpy(atletasOrd[count].nome,atletas[i].nome);
        strcpy(atletasOrd[count].esporte,atletas[i].esporte);
        atletasOrd[count].altura = atletas[i].altura;
        
    }

    for(i=0;i<5;i++) {
        printf("%d- %s\n",(i+1),atletasOrd[i].nome);
    }


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arquivo;
    char linha[1000];
    int i = 0;
    char *totais[1000];

    arquivo = fopen("case.txt","r");
    
    while(fgets(linha,sizeof(linha),arquivo)!=NULL) {
        strcpy(totais[i],linha);
        i++;
    }

    for(i=0;i<8;i++) {
        printf("%s",totais[i]);
    }



    return 0; 
}
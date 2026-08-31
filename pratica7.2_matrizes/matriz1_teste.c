#include <stdio.h>

int main() { 

    int nlinhas;
    printf("numero de linhas: ");
    scanf("%d",&nlinhas);

    int ncolunas;
    printf("numero de colunas: ");
    scanf("%d",&ncolunas);

    int m[nlinhas][ncolunas];
    int i,j;

// escanenando a matriz.
    for(i=0;i<nlinhas;i++) {
        printf("elementos da linha: \n");
        for(j=0;j<ncolunas;j++){
            scanf("%d",&m[i][j]);
        }
    }

// printando a matriz computada. 
    for(i=0;i<nlinhas;i++) {
        printf("\n");
        for(j=0;j<ncolunas;j++){
            printf("%d ",m[i][j]);
        }
    }


    
    return 0;
}
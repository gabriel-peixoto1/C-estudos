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
// agora que a a matriz 'm 'está escaneada, encontrar o maior valor.

    int maior = m[0][0];        // vou usar para escanear o maior valor, começando do primeiro elemento.
    int indiceColuna;           // vai me dar o indice da coluna em que está o maior elemento.

    for(i=0;i<nlinhas;i++){
        for(j=0;j<ncolunas;j++){
            if (m[i][j] > maior){
                maior = m[i][j];
                indiceColuna = j;
            }
            else if (m[i][j] == maior) {
                if(j<indiceColuna) {
                    indiceColuna = j;
                }
            } 
        }
    }

    printf("%d",indiceColuna);


return 0;
}
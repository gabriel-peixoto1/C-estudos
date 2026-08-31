#include <stdio.h>

int main() {

    int tam1;
    scanf("%d",&tam1);
    int i;
    int v1[tam1];
    for(i=0;i<tam1;i++) {
        scanf("%d",&v1[i]);
    }

    int tam2;
    scanf("%d",&tam2);
    int j;
    int v2[tam2];
    for(j=0;j<tam2;j++) {
        scanf("%d",&v2[j]);
    }

    // imprimir interseção entre v1 e v2. 

    for(i=0;i<tam1;i++) {           // para cada elemento v1[i], ele percorre todos os v2[j].
        for(j=0;j<tam2;j++){        // nesse caso, vê se QUALQUER v2[j] é igual a CADA v1[i].
            if (v1[i] == v2[j]) 
                printf("%d ",v2[j]);
        }
    }
    

    return 0;
}
#include <stdio.h>

int main() {        // ordenação por ranking! 

    int n; 
    scanf("%d",&n);
    int v[n];
    int i, j;
    for(i=0;i<n;i++) {
        scanf("%d",&v[i]);
    }

    int vOrd[n];   // criando um vetor auxiliar para guardar os elementos de v na ordem correta.

    for(i=0;i<n;i++) {
        int count = 0;      // esse count tem que ficar aqui, porque ele deve ser reiniciado a cada iteração do 'i'.
        for(j=0;j<n;j++){
            if (v[i] < v[j]) {
                count = count + 1;
            }
        }
    vOrd[count] = v[i];  // a atribuição de valor ao vetor auxiliar deve ser feita ao final de cada ciclo de iteração do 'i'.
    }

    for(i=0;i<n;i++){
        printf("%d ", vOrd[i]);
    }

    return 0; 
}
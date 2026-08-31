// Primeiro problema:
// O professor escreveu essa merda mt rápido e ainda errou e teve que corrigir, então não deve estar
// completamente certo. Conferir com o chat, ou olhar o código feito pelo prof no GitHub.


#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 10


int existe(int x,int v[], int n)      // o x está nas n posições do vetor v? Isso que essa função faz.
    int i;
    for(i = 0;i < n;i = i + 1) {
        if(v[i] == x)          // se algum dos elementos igual a x, então existe() = 1.
            return 1;
    }
            return 0;       // se nenhum v[i] == x, então existe() = 0. 



void ordCont(int v[], int n) {
    
    int vaux[MAXTAM];
    int count[MAXTAM];
    int i, j, x, contador;

    for(i = 0; i < n; i = i + 1) {
        x = v[i];
        contador = 0;
        for(j = 0; j < n; j = j + 1) {
            if(v[j] < x) {
                contador = contador + 1;
            }
        }
        count[i] = contador; 
        v[count[i]] = vaux[i];
    }

    for(i = 0; i < n; i = i + 1) {

        v[count[i]] = vaux[i];
    }

}


int main() {

    int cheques[100];
    int n = 5 + rand() %6;
    int count = 0; 

    while (count < n) {
        cheques[count] = 1 + rand() % 10;
        count = count + 1;
        if(!existe(cheques[count],cheques,count)) // essa parte vai analisar se já foi um valor gerado com o mesmo valor (?).
            count = count + 1;    // se não existe elementos iguais no vetor, continuar a contagem. 
    
    }
printf("\n cheques ordenados =\n");
ordCont(cheques, n)

    for (count = 0; count < n; count = count + 1) {
        printf("%d ",cheques[count]);
    }

return 0;
}
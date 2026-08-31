/*
Neste exercício, implemente uma função chamada removechar que recebe, nesta ordem: um ponteiro 
para uma string A, o tamanho de A, e um caracter c. A função removechar é do tipo void, 
ele não precisa retornar nada. Você tem que modificar diretamente a string utilizando o ponteiro 
que foi passado como parâmetro.

Por exemplo:

Palavra de entrada "banana", remova a letra 'a'. Resultado: "bnana";
Palavra de entrada "PDS1", remova a letra '1'. Resultado: "PDS";
Palavra de entrada "UFMG", remova a letra 'Z'. Resultado: "UFMG";
*/

// strcspn localiza a primeira ocorrência de um caracter na string. 

#include <string.h>
#include <stdio.h>

void removechar(char *A, int tam, char c) {

    int i,j;

    for(i=0;i<tam;i++) {    
        if(A[i] == c) {
            for(j=i;j<tam-1;j++){       // começar em A[j] = A[i] e ir substituindo sempre pelo da frente.
                A[j] = A[j+1];
            }
        break;
        }
    }
} 


int main() {

    char str[] = "isabella";
    removechar(str,9,'b');      // tamanho tem que ser num. de letras + 1. 
    printf("%s",str);


    return 0;
}
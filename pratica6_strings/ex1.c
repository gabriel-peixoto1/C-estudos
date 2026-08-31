/* 
Caracteres alfanuméricos são apenas os caracteres que são letras (maiúsculas ou minúsculas) ou 
dígitos numéricos (0 a 9).

Exercício:
Neste exercício, você vai precisar implementar uma função chamada contacarateresalfa que recebe, 
nesta ordem: um ponteiro para uma string A, o tamanho de A  (inteiro) e retorna um inteiro. 
Esse inteiro, é o numero de caracteres alfanuméricos dentro da string A. Pode desconsiderar 
caracteres com acentuação.

Por exemplo, se a string A for "Ola, mundo! 123 :)" a função contacarateresalfa deve retornar 11.
*/

#include <stdio.h>
#include <string.h>

// a tabela ASCII transforma caracteres em números inteiros. 

int contacarateresalfa (char *A, int tamanho) {

    int i; 
    int count = 0; 


    for (i = 0; i < tamanho; i = i + 1) {
        if(A[i] >= 65 && A[i] <= 90)    // se houver letra maiúscula, contar mais um.
            count = count + 1;
        else if(A[i] >= 97 && A[i] <= 122)  // se houver letra minuscula, contar mais um.
            count = count + 1;
        else if(A[i] >= 48 && A[i] <= 57)   // se houver números, contar mais um.
            count = count + 1;
        else 
            count = count;
    } 

    return count;
} 



int main() {

    char A[] = "Eu sou vencedorrr 123 !!!!!!!";

    int tamanho = strlen(A);

    printf("%d\n", contacarateresalfa(A, tamanho));

    return 0;
}
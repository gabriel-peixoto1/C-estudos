/*
Concatenação de strings em C é o processo de juntar duas ou mais strings em uma só. C não possui um 
operador específico para isso (como o + em outras linguagens).

Exercício:
Neste exercício, implemente uma função chamada concatena que recebe, nesta ordem: um ponteiro para 
uma string A, o tamanho de A, um ponteiro para uma string B, o tamanho de B, e um terceiro ponteiro 
para uma string S e que faça a string S ser a concatenação das strings A e B. Por exemplo, se A e B 
são, respectivamente, "abcd" e "wxyz", a string S deve ser "abcdwxyz" após a operação.

Você pode assumir que a string resultante S terá tamanho alocado suficiente para a operação.

Dica: Tem várias formas de fazer a concatenação, lembre da biblioteca <string.h>
*/

#include <stdio.h>
#include <string.h>


void concatena(char *A, int lenA, char *B, int lenB, char *S) {

strcat(A,S);
strcat(S,B);

}

// se não pudessemos usar o strcat, seria necessário criar um for usando o tamanho de cada string
// para juntar todas elas em S. 
/* Escreva uma função que recebe:
1. um ponteiro s para um vetor de caracteres alocado dinamicamente, e 
2. o valor n correspondente ao espaço atualmente reservado para esse vetor na memória.
A função deve copiar todo o conteúdo de s para uma nova área de memória com o dobro do tamanho,
liberar o espaço originalmente ocupado por s e retornar o ponteiro para a nova área.
O parâmetro n é passado por referência e deve ser atualizado para o novo tamanho (2n). */

#include <stdio.h>
#include <string.h> 

char *dobraMem(char *s, int *n) {

    char *s2 = malloc(2*sizeof(char));     // nova área de memória com o dobro de tamanho;
    strcpy(s2,s);
    free(s);
    *n = (*n)*(2);

    return s2;
}   
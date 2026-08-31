/* Escreva uma função chamada soma1 que recebe como parâmetro um ponteiro para 
inteiro (ou seja, um endereço de memória que armazena um valor do tipo int) e 
soma 1 ao valor contido nesse endereço. A função deve ser do tipo void.

O protótipo da função é:

void soma1(______________);

Complete o protótipo e implemente a função.*/

void soma1(int *p) {
    *p = *p + 1;
} 

/* nao fazer um main nessa questao, apenas a funcao soma1, 
pois o main ja esta pronto na questao do moodle, e eu so preciso 
implementar essa funcao (grandes bostas). */
/* Escreva uma função chamada testaSoma1 que recebe um inteiro x como parâmetro e 
incrementa seu valor em 1 utilizando a função soma1, implementada no 
exercício anterior.

Considere que a função soma1 já está corretamente implementada no módulo 
minhas_funcoes.h, portanto, não é necessário reescrevê-la, 
apenas incluir o módulo com:

#include "minhas_funcoes.h"

A função testaSoma1 deve retornar o valor de x após a chamada de soma1.*/

#include "minhas_funcoes.h"

int testaSoma1 (int x) {      // esse int define o formato de saida da funcao.

    soma1 (&x);          // soma1 requer um ponteiro, entao chamamos com &x. 
    return x;           // valor de saida: x, agora alterado. 
}


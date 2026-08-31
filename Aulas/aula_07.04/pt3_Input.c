// Aula de Hoje: Condicionais: IF  e ELSE 

/* Input em C */ 

#include <stdio.h>

int main() {

    int entrada; 
    printf("Digite um numero inteiro: ");
    scanf("%d",&entrada);

// a funcao scanf escaneia o valor (usando %) e depois armazena ele na memoria
// da variavel criada pelo '&entrada'.

    printf("O input foi: %d", entrada);

    return 0;
}
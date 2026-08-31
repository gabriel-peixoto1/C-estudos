#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);    // a primeira entrada será o tamanho do vetor.

    int vetor[n];       // criando um vetor com 'n' posições.
    int i;

    for(i = 0; i < n; i++) {
        scanf("%d",&vetor[i]);      // criando um looping para adicionar todos os elementos que o usuário escrever ao meu vetor.
    } 

    for(i = n-1; i >= 0; i--){
    printf("%d ",vetor[i]);        // imprimindo cada elemento na ordem inversa.
}

    return 0;
}
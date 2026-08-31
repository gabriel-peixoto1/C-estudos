#include <stdio.h>
#include <math.h>

int main() {

    int n;
    printf("Escreve um número inteiro n: ");
    scanf("%d",&n);

    int i = 0;
    int soma = 0;

    for (i = 1; i <= n; i = i + 1) {
        if(n % i == 0) {
            soma = soma + i;
            }
    }   

    printf("soma div: %d",soma);


    return 0;
}
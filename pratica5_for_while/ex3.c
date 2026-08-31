#include <stdio.h>
#include <math.h>

int main() {
   
    int div = 0;
    int i = 0;
    
    int num;
    printf("Digite um número inteiro : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i = i + 1) {
        if (num % i == 0) {
            div = div + 1;
        }
    }

    if (div == 2) 
        printf("Primo\n");
    else 
        printf("Nao e primo\n");

    return 0;
}
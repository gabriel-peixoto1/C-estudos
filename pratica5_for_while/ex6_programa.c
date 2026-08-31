
#include <stdio.h>
#include <math.h>

int main() {

    int n;
    printf("Digite um número inteiro: ");
    scanf("%d",&n);

    int fatorial = n;
    int i;

    if (n == 0) {
        fatorial = 1;
    }
    
    else {
        for (i = n - 1; i > 0; i = i - 1) {
        
        fatorial = fatorial * i; 
    }
    }
    printf("Fatorial: %d",fatorial);

    return 0;
}
#include <stdio.h>
#include <math.h>

int fatorial(int n) {

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

    return fatorial;
}

int main() {

    int n;
    printf("Digite um número inteiro: ");
    scanf("%d",&n);

    printf ("%d",fatorial(n));
}
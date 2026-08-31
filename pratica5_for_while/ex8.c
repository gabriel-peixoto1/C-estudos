#include <stdio.h>
#include <math.h>

int mdc(int a, int b) {

    while (b != 0) {

        int resto = a % b;
        a = b;
        b = resto;
    }

    return a;
    }



int main() {

    int a;
    printf("Digite um numero inteiro: ");
    scanf("%d",&a);

    int b;
    printf("Digite um numero inteiro: ");
    scanf("%d",&b);
    
    printf("o mdc entre ambos eh: %d",mdc(a,b));

    return 0;
}
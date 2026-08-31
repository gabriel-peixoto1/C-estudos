#include <stdio.h>

/*
2/5 * 4/9
*/

// fazendo multiplicação de frações com as ferramentas que temos atualmente.
// funcionando. 

void imprimeMultFracao(int n1, int d1, int n2, int d2) {

    printf("\n%d/%d",n1*n2,d1*d2);

}

int main() {
    int num1, den1, num2, den2; 

    scanf("%d %d %d %d",&num1, &den2, &num2, &den2);
    imprimeMultFracao(num1,den1,num2,den2);


}
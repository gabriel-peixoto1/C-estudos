/* Faça um programa que leia cinco números inteiros, um número por linha, 
e imprima: o maior valor informado, o menor valor informado e 
quantos números são divisíveis por 3.*/

#include <stdio.h>
#include <math.h>

int main() {
    
    int n1,n2,n3,n4,n5;
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

    int maior = n1;
    if (n2>maior) maior = n2;
    if (n3>maior) maior = n3;
    if (n4>maior) maior = n4;
    if (n5>maior) maior = n5;

    int menor = n1;
    if (n2<menor) menor = n2;
    if (n3<menor) menor = n3;
    if (n4<menor) menor = n4;
    if (n5<menor) menor = n5;

    int div3 = 0;
    if (n1 % 3 == 0) div3=div3+1;
    if (n2 % 3 == 0) div3=div3+1;
    if (n3 % 3 == 0) div3=div3+1;
    if (n4 % 3 == 0) div3=div3+1;
    if (n5 % 3 == 0) div3=div3+1;

    printf("Maior: %d\nMenor: %d\nQuantidade de divisiveis por 3: %d\n",maior,menor,div3);

    return 0;
}
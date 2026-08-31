#include <stdio.h>

int main() {

    float valor;
    char id; 
    scanf("%f %c",&valor,&id);

    if (id=='G') printf("O valor em MG seria de R$%.2f",valor * 1.07);
    else if (id == 'P') printf("O valor em SP seria de R$%.2f",valor * 1.12);
    else if (id == 'J') printf("O valor em RJ seria de R$%.2f",valor * 1.15);
    else if (id == 'S') printf("O valor em MS seria de R$%.2f",valor * 1.08);
    else printf("Estado invalido");
    
    return 0; 
}
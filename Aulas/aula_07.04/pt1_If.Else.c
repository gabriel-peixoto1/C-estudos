// Aula de Hoje: Condicionais: IF  e ELSE 


/* Problema 1: 
Determinar se o valor que tenho é suficiente para reparar o carro. 
Reparo = R$ 400.00 */ 


#include <stdio.h>

float reparo = 400;
float valor = 300;

int main() {
    
    if(reparo >= valor) {
    printf("Voce nao tem dinheiro para pagar.");
    }
    else {
    printf("Deu bom, pode pagar.");
    }  
return 0;    
}
// Aula de Hoje: Condicionais: IF  e ELSE 

/* Problema 2: O programa recebe Celsius e retorna Fahrenheit.*/


#include <stdio.h>

int main () {

float celsius;
    printf("celsius: ");
    scanf("%f",&celsius);

float fah = ((9*celsius)/5) + 32; 

printf("fahrenheit: %f", fah);

    return 0;
}
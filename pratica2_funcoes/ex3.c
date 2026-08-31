#include <stdio.h>
#include <math.h>

// definindo a funcao de laplace: 

float laplace(float x, float u, float b) {

   return (1/(2*b))*(exp(-1*(fabs(x-u)/b))); 
}

// definindo as entradas e saídas: 

int main() {

    float x;
    printf("valor de x: ");
    scanf("%f",&x);

    float u;
    printf("valor de u: ");
    scanf("%f",&u);

    float b;
    printf("valor de b: ");
    scanf("%f",&b);

    printf("o valor da funcao de laplace eh: %f", laplace(x,u,b));


    return 0;
}
#include <stdio.h>
#include <math.h>

// funcao gumble com duas variaveis, sendo uma delas auxiliar (z). 

float gumble(float x, float u, float b) {
    float z = (x - u)/b;
    return (exp(-1*(z+exp(-z))))/b;

}

// chamando todos os scanf e imprimindo o retorno. 

float main() {

    float x;
    printf("Insira o valor de x: ");
    scanf("%f",&x);

    float u;
    printf("Insira o valor de u: ");
    scanf("%f",&u);

    float b;
    printf("Insira o valor de b: ");
    scanf("%f",&b);

printf("o valor da distribuicao de gumbel eh: %f", gumble(x,u,b));

    return 0; 
}
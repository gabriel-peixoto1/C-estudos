#include <stdio.h>
#include <math.h>

// definindo a funcao cauchy: 

float cauchy(float x) {
    return 1.0/(3.141592*(1+x*x));
}

//  aplicando a funcao cauchy a um scanf e imprimindo o output. 

float main () {

float x;
    printf("Insira um parâmetro x: ");
    scanf("%f",&x);

printf("O valor da densidade de probabilidade eh: %f",cauchy(x));

    return 0;
} 
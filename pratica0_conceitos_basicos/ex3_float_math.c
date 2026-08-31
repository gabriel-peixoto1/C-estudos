/* Escreva e compile o programa abaixo, 
que imprime na tela os senos de 3,14 e de 4,13.

#include <stdio.h>
#include <math.h>

int main() {
    printf("Seno de 3.14: %f\n", sin(3.14));
    printf("Seno de 4.13: %f\n", sin(4.13));
    return 0;
}
*/ 


# include <stdio.h>
# include <math.h>

int main() {
    printf("seno de 3.14: %f\n",sin(3.14));
    printf("seno de 4.13: %f\n",sin(4.13));
}

/*
obs.1: biblioteca math.h para calcular o seno.
obs.2: o C nao aceita o uso de aspa unica no lugar de aspas duplas.
obs.3: o %f, que descreve ponto flutuante, me diz onde quero a variável no 
meu output. a virgula separa a variavel que quero na saida. 
*/
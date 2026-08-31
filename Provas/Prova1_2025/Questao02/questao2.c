#include <stdio.h>
#include <math.h>

float calcularArea (float x1, float y1, float x2, float y2) {

float esquerda, cima, direita, baixo;

    esquerda = sqrt((x1*x1)+(y1*y1));
    cima = sqrt((x1*x1)+(y2*y2));
    direita = sqrt((x2*x2)+(y1*y1));
    baixo = sqrt((x2*x2)+(y2*y2));

    return esquerda*baixo;
}
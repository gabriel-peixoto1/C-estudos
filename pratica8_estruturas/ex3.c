/*
Usando as estruturas retangulo e ponto do exercício anterior, faça um programa que declare e 
leia um retângulo e um ponto, e posteriormente informe se o ponto está ou não dentro do 
retângulo.

Seu programa deve ler primeiro o retângulo, verificando que o segundo ponto está à direita e 
abaixo do primeiro e imprimindo "Coordenada Invalida" em caso negativo, como no exercício 
anterior. Após ler os dois pontos do retângulo, seu programa deve ler mais um ponto, cuja 
posição será testada.

Seu programa deve imprimir "O ponto pertence ao retangulo" ou "O ponto nao pertence ao 
retangulo" ao final da execução.
*/

#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} ponto;

typedef struct{
    ponto pinicial;
    ponto pfinal;
} retangulo;

float dist(ponto p1, ponto p2) {
    return sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
}

int main() {

retangulo r;
ponto supd = {r.pfinal.x,r.pinicial.y};
ponto infe = {r.pinicial.x,r.pfinal.y};
ponto p;


int valido = 0;

while (valido==0) {

    scanf("%f %f %f %f %f %f",&r.pinicial.x,&r.pinicial.y,&r.pfinal.x,&r.pfinal.y,&p.x,&p.y);

    if (r.pfinal.x > r.pinicial.x &&
        r.pfinal.y < r.pinicial.y) { 
        if (p.x >= r.pinicial.x && p.x <= r.pfinal.x && p.y >= r.pfinal.y) {
            printf("O ponto pertence ao retangulo");
        }
        else {printf("O ponto nao pertence ao retangulo");}    
        
        valido = 1;
    }
    else {
        printf("Coordenada Invalida\n");
    }
}


    return 0;
}
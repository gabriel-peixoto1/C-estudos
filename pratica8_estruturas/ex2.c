/*
Crie uma estrutura chamada retangulo. Essa estrutura deverá conter o ponto superior esquerdo e 
o ponto inferior direito de um retângulo. Cada ponto deve ser definito como uma estrutura ponto,
 a qual contém as posições do ponto nos eixos X e Y. Faça um programa que declare e leia uma 
 estrutura retangulo e exiba a área, o comprimento da diagonal e o perímetro desse retângulo.

Seu programa deve ler uma linha contendo dois números de ponto flutuante separados por espaço, 
correspondendo às coordenadas de um ponto. Após ler o primeiro ponto, o segundo ponto deve estar 
obrigatoriamente localizado à direita (coordenada X maior) e abaixo (coordenada Y menor) do 
primeiro ponto. Caso o segundo ponto tenha coordenadas invalidas (esteja à esquerda ou acima 
do primeiro ponto), seu programa deve imprimir "Coordenada Invalida" e ler novas coordenadas 
para o segundo ponto. Seu programa deve tentar ler o segundo ponto quantas vezes forem 
necessárias até que um ponto com coordenadas válidas seja informado.
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

    scanf("%f %f %f %f",&r.pinicial.x,&r.pinicial.y,&r.pfinal.x,&r.pfinal.y);

    ponto supd = {r.pfinal.x,r.pinicial.y};
    ponto infe = {r.pinicial.x,r.pfinal.y};

    float area = (dist(r.pinicial,supd)*dist(supd,r.pfinal));
    float diagonal = dist(r.pinicial,r.pfinal);
    float perimetro = 2*dist(r.pinicial,supd)+2*dist(supd,r.pfinal);


    if(r.pfinal.x <= r.pinicial.x || r.pfinal.y >= r.pinicial.y) {
        printf("Coordenada Invalida");
    }
    else {
    printf("Area = %.2f\n",area);
    printf("Perimetro = %.2f\n",perimetro);
    printf("Diagonal = %.2f\n",diagonal);
    }


    return 0;
}




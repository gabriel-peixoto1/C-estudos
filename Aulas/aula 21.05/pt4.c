#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_X 480
#define MAX_Y 640
#define NUMPREDIOS 10

/*
vamos criar um jogo que, dentro de um mapa com coordenadas (x,y), ele cria cilindros em lugares
e com tamanhos aleatórios para surgirem dentro desse mapa. 

se usar uma struct para definir outra, é preciso garantir que elas estejam em ""ordem, ou seja,
a struct ponto tem que ser definida antes da struct circulo, que tem que ser definida antes da
struct cilindro.
*/


// definições:

typedef struct ponto{
    int x , y;
} ponto; 

typedef struct circulo {
    float raio;
    ponto centro;
} circulo;

typedef struct cilindro {
    circulo base;
    float altura;
} cilindro;

// funcoes uteis:

float dist(ponto p1, ponto p2) {
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}

float areaCirculo(circulo c) {
    return (3.141592 * c.raio * c.raio);
}

cilindro geraCilindro() {       // não tem parametros de entrada. 
    cilindro c;
    c.altura = 1 + rand() % 101;
    c.base.raio = 1+ rand() %11; 
    c.base.centro.x = rand() %MAX_X;   // cada circulo tem uma base, que por si só tem um centro, que por si só tem um x. Por isso esse tanto de ponto.
    c.base.centro.y = rand() %MAX_Y;   // quero definir o y do centro da base do circulo c. 
    return c;
}

void preencheCilindro(*c) {   // alterando o cilindro que já existe, criado na última função.
    (*c).altura = 1 + rand() % 101;
    (*c).base.raio = 1+ rand() %11;         //esse (*c) é o mesmo que usar c->, ou seja, c->base.raio.
    (*c).base.centro.x = rand() %MAX_X;     //usar essa simbologia quando estivermos acessando endereço.
    (*c).base.centro.y = rand() %MAX_Y; 
} 

float volumeCilindro(cilindro c) {

    return areaCirculo(c.base) * c.altura;
}

imprimeCilindro(cilindro c) {
// nao deu tempo de copiar essa bosta. 
}



// main:


int main() {

    cilindro predios[NUMPREDIOS];
    int i;
    float volumeTotal = 0;

    for(i=0;i<NUMPREDIOS;i++) {           // criando 10 predios preenchidos.
        preencherCilindro(&predios[i]);
        //predios[i] = geraCilindro();      também daria certo, mas não atualizaria os prédios já existentes (?)
        imprimeCilindro(predios[i]);
        volumeTotal = volumeTotal + volumeCilindro(predios[i]);
    }

    printf("\nVolume total: %f\n", volumeTotal);


    return 0;
}
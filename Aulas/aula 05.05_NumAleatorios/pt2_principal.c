#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXN 10

// função que gera um numero aleatorio entre 0 e (max-1):
int randmax(int max) {
return rand() % max;
}

// gera um numero aleatorio entre 0 e max:
int randmax_inclusivo(int max) {
return rand() % (max+1);
}

// gera um número aleatório entre min e max (incluindo min e max):
int randInt(int min, int max) {
    return min + (rand() % (max - min + 1)); 
}

// gera um numero float entre 0 e 1:
float randf() {
    return (float) rand()/RAND_MAX;
}

// gera um número float aleatório:
float randfloat(float min, float max) {
return min + randf()*(max - min);
}

// solução alternativa para float aleatório:
float randfloat2(float min, float max) {
    return randInt(min,max-1) + randf();
}
/* essa é legal. pega um inteiro aleatorio e soma com uma 
parte fracionária aleatória.*/


// cria um valor aleatório em dinheiro (2 casas decimais):
float randMoney (int min, int max) {
    float num = randfloat2(min,max);
    num = num * 100;
    num = (int) num;
    num = num/100;
    return num;
}

// alternativa para valor aleatorio em dinheiro: 
float randMoney2 (int min, int max) {
    return randInt(min,max-1) + randInt(0,100)/100.0;
}


// codigo main da aula para testar as funções criadas.
int main() {
    int r[MAXN], i;

    // srand(2)
    srand(time(NULL));
    
    for(i = 0; i < MAXN; i = i + 1) {

        r[i] = randInt(5,100);
        printf("r[%d] = %d\n",i,r[i]);
    }


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct lutador { 
    char *nome; 
    int vitalidade; 
    int dano_maximo; 
}; 
typedef struct lutador Lutador;


int randint(int min, int max) {  
 return min + rand()%(max-min+1); 
} 

void ataque(Lutador atacante,Lutador alvo) {

    int dano = randint(1,atacante.dano_maximo); 
    alvo.vitalidade = alvo.vitalidade - dano;

}

#include <stdio.h>
#include <stdlib.h>

struct lutador { 
    char *nome; 
    int vitalidade; 
    int dano_maximo; 
}; 
typedef struct lutador Lutador;



void eliminaLutador(Lutador v[], int ferido, int *n) { 
    if(v[ferido].vitalidade <= 0) { 
        v[ferido] = v[ferido + 1]; 
        free(v[ferido+1]); 
        *n = (*n)-1; 
    } 
} 
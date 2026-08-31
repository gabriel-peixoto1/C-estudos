#include <stdio.h>


float calculamedia(int n, float v[]) {      // funcao recebe vetor ----> 'v[]'

float soma = 0;
int i;

for(i=0; i<n; i++){
    soma = soma + v[i];
}

return (soma/n);
}
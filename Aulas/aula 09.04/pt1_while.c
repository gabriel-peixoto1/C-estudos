/*  Aula de Hoje: Operadores de Repeticao (Loop ou Lacos)  */ 

// processamento iterativo: 

# include <stdio.h>

int main () {

int s = 0 ;
int i = 1 ;
int n;

printf("digite o valor de n: %d",n);
scanf("%d",&n);

while (i<=n) { 

    s = s + i;
    i = i + 1;  // i++}

printf("o valor eh: %d", i);

return 0; }
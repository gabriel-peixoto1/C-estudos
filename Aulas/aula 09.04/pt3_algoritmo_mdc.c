/*  Aula de Hoje: Operadores de Repeticao (Loop ou Lacos)  */ 

/* Problema 3: Criar uma calculadora de MDC entre dois números.*/ 

# include <stdio.h>

int main() { 

    int a;
    printf("digite o valor do numero A: "); 
    scanf("%d", &a);

    int b; 
    printf("digite o valor do numero B: ");
    scanf("%d",&b);

    while (b != 0)  {    
    
    int r = a % b;  // operador de resto da divisao. 
    a = b;
    b = r; 
    } 

    int mdc = a; 
    printf("o mdc entre eles eh: %d\n", mdc);


    return 0; 
}
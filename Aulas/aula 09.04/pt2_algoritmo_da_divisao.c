/*  Aula de Hoje: Operadores de Repeticao (Loop ou Lacos)  */ 

/* Problema 2: Suponha que soma e subtracao sao as unicas operacoes possiveis. 
Dados dois numeros naturais A e B, determine o quociente e o resto entre A e B.*/

// esse código está correto, mas esse código não está rodando certo. click "debug anyway".
# include <stdio.h>

int main() { 

    int a;
    printf("digite o valor do dividendo A: "); 
    scanf("%d", &a);

    int b; 
    printf("digite o valor do divisor B: ");
    scanf("%d",&b);

    int q = 0;

    while (b<=a) {

        q = q + 1;
        a = a - b;

    }

int r = a;

    printf("quociente = %d e resto = %d\n", q, r);


    return 0;
}
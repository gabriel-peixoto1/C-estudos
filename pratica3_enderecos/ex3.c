/* Escreva uma função chamada troca que recebe como parâmetros dois ponteiros 
(variáveis que armazenam endereços de memória) para float, 
denominados end_valor1 e end_valor2.

A função deve trocar os valores armazenados nos endereços apontados por essas 
variáveis. Ou seja, o conteúdo do endereço end_valor1 deve ser armazenado em 
end_valor2, e o conteúdo de end_valor2 deve ser armazenado em end_valor1.*/


# include <stdio.h>

void troca(float *end_valor1, float *end_valor2) {
    float temp = *end_valor1;
    *end_valor1 = *end_valor2;
    *end_valor2 = temp;
}

int main () {
    int x;
    printf("escreva um valor inteiro para x: ");
    scanf("%d",&x);

    int y;
    printf("escreva um valor inteiro para y: ");
    scanf("%d",&y); 

troca (x,y): 





    return 0;
}
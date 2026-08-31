/* 
Uma conta poupança foi aberta com um depósito inicial de R$ 789,54,rendendo 0,56% 
de juros ao mês. No segundo mês, um depósito de R$ 303,20 foi realizado. 
No terceiro mês, houve um saque de R$ 58,25. Escreva um programa que calcule e 
exiba o saldo da conta no início do quarto mês, exibindo o resultado com apenas 
duas casas decimais. A poupança calcula os juros no último dia do mês.

Dica: Utilize uma variável para armazenar e atualizar o saldo da conta conforme 
os depósitos, saques e rendimentos mensais.
*/ 

#include <stdio.h>

int main() {

    float di = 789.54;
    float primeiro = di * 1.0056;
    float segundo = (primeiro + 303.20)*1.0056;
    float terceiro = (segundo - 58.25)*1.0056;
    printf("o saldo no quarto mes eh: %.2f",terceiro);

    return 0;
}


// corretissimo. 
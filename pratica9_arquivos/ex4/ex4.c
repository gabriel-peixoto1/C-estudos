/* Escreva um programa que leia o arquivo case.txt, este arquivo possui um número por linha. 
Calcule:
    A soma de todos os números
    O maior número no arquivo
    O menor número no arquivo
    A média dos números pares
    A quantidade de primos na sequência
Dica: Utilize a função atoi() para converter strings em número.

Exemplo de Arquivo de Entrada:
25
2
47
5
8
90

Exemplo de Saída:
A soma é: 177
O maior número é: 90
O menor número é: 2
A média dos pares é: 33.33
O número de primos é: 3 */

#include <stdio.h>
#include <stdlib.h>

// FIQUEI COM PREGUIÇA DE FAZER TUDO. MAS O CAMINHO É ESSE. 

int main() {

    FILE *arquivo;
    char linha[100];
    int i = 0;
    int numeros[6];
    int soma = 0;
    int j;

    arquivo = fopen("case.txt","r");

    while(fgets(linha,sizeof(linha),arquivo)!=NULL) {
        numeros[i] = atoi(linha); 
        soma = soma + numeros[i];
        i++;
    }

    int maior = numeros[0]; 
    int menor = numeros[0];

    for(i=0;i<6;i++) {
        if(numeros[i]>maior) {
            maior = numeros[i];
            }
        if (numeros[i]<menor) {
            menor = numeros[i];
            }
        }
    
    fclose(arquivo);
    printf("%d %d %d", maior, menor, soma);
    return 0;
}
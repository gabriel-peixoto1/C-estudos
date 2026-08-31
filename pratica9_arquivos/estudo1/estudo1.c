/* Crie um programa em C que:

Abra (ou crie) um arquivo chamado numeros.txt para escrita.
Leia 5 números inteiros digitados pelo usuário.
Grave esses números no arquivo, um por linha.
Feche o arquivo.
Abra novamente o arquivo para leitura.
Leia os números armazenados e calcule a soma deles.
Exiba a soma na tela.  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    float numeros[5];
    int i;
    FILE *arquivo;

    for(i=0;i<5;i++) {
        printf("Digite um número: ");
        scanf("%f",&numeros[i]);
    }

    arquivo = fopen("estudo1.txt","w");

    for(i=0;i<5;i++) {
        fprintf(arquivo,"%f\n",numeros[i]);
    }

    fclose(arquivo);

    // ======================= Segunda Parte =======================

    FILE *arquivoalt;
    float numbers[5];
    float soma = 0;

    arquivoalt = fopen("estudo1.txt","r");

    for(i=0;i<5;i++) {
        fscanf(arquivoalt,"%f",&numbers[i]);
    }

    for(i=0;i<5;i++) {
        soma = soma + numbers[i];
    }

    printf("A soma dos numeros é: %f",soma);

    fclose(arquivoalt);
    return 0;
}
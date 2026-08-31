/* Exercício Resolvido: Cadastro de Alunos com Alocação Dinâmica
Enunciado

Faça um programa que:

Leia a quantidade de alunos de uma turma.
Aloque dinamicamente um vetor para armazenar as notas dos alunos.
Leia as notas.
Calcule e exiba a média da turma.
Libere a memória utilizada. */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i;
    float soma = 0;
    float *notas = malloc(n*sizeof(float));

    printf("Digite a quantidade de alunos: ");
    scanf("%d",&n);

    if(notas == NULL) {
        printf("Erro na alocação de memoria.\n");
        return 1;
    }

    for(i=0;i<n;i++) {
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%f",&notas[i]);
    }

    for(i=0;i<n;i++) {
        soma = soma + notas[i];
    }

    printf("Media de notas: %f", (soma/n));
    
    free(notas);

    return 0;
}
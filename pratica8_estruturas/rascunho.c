#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // para atribuir nome a eles.


// criando variáveis nos padrões normais que serão usadas dentro do meu struct. 
int idade;
char sexo[10];
float grana;

// criando um tipo de estrutura chamada "mlk", em que eu tenho a idade, o nome e o dinheiro que ele tem. 
struct mlk { 
    int idade;
    char nome[50];
    float grana;
}; 

// criando um vetor de estruturas: 
struct mlk alunosFunec[10];  //agora tem o alunoFunec[0], alunoFunec[1], alunoFunec[2]... e todos eles são 'mlk' com idade, nome e grana.

// criando uma função para imprimir todas as informações. 
void printar(struct mlk m1) { 
    printf("Nome: %s\n",m1.nome);
    printf("Idade: %d\n",m1.idade);
    printf("Salario: R$ %.2f\n\n",m1.grana);
}


int main() {

// declarando variáveis que serão usadas futuramente. 
struct mlk m1;  
struct mlk m2; 
struct mlk m3; 

// com isso, já podemos dar características para cada um deles, usando o '.' para separar cada campo.

// JAO:
m1.idade = 19; 
m1.grana = 1200.00;
strcpy(m1.nome,"Jao");
printar(m1);
// MEL
m2.idade = 19;
m2.grana = 1500.00;
strcpy(m2.nome,"Mel");
printar(m2);
// PEIXOTO  ----> Declarando os valores de uma outra forma, mais rápida.
struct mlk m4 = {19, "Peixoto",2000.00};
printar(m4);

return 0;
}


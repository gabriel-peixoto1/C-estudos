#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// usando o typedef para não precisar ficar escrevendo struct toda hora. 
typedef struct {
    char nome[50];
    int idade;
    int nivelGay;
} gay;

void printar(gay g) {
    printf("Nome: %s\n",g.nome);
    printf("Idade: %d\n",g.idade);
    printf("nivelGay(0 a 10): %d\n\n",g.nivelGay);
}

int main() {
// definindo cada informação de um gay e printando os resultados. 
gay g1 = {"Reidner",22,10};
printar(g1);
gay g2 = {"Yuri",24,4};
printar(g2);
gay g3 = {"Sazon",21,8};
printar(g3);

printf("tamanho da estrutura: %zu\n",sizeof(gay));


return 0;
}

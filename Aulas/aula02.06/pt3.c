#include <stdio.h>
#include <stdlib.h>

struct pessoa {
    char *nome;
    int idade;
}

struct pessoa *criar_pessoa2(const char *nome, int idade) {
    struct pessoa *p = malloc(sizeof(struct pessoa));
    p->nome = malloc(sizeof(char) * (strlen(nome) + 1)); // alocamos memória para o nome, considerando o caractere nulo.
    strcpy(p->nome, nome);
    p->idade = idade; 
    return p;
}

int main(int argc, char *argv[]) {
    struct pessoa *p = criar_pessoa2("Joao",20);
    printf("Nome: %s, Idade: %d\n", p->nome, p->idade);

    if (p != NULL) {
        free(p->nome);
        free(p);
    }

 return 0;
}
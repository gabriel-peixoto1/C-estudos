struct pessoa {
    char *nome;
    int idade;
}

struct pessoa *criar_pessoa1(const char *nome, int idade) {
    struct pessoa p;
    strcpy(p.nome, nome);
    p.idade = idade; 
    return &p;
}

int main (int argc, char *argv[]) {
    struct pessoa *p = criar_pessoa1("Joao",20);
    printf("Nome: %s, Idade: %d\n", p->nome, p->idade);

 return 0;
}
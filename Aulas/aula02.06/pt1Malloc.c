#include <stdlib.h>

void* malloc(size_t size);        // size_t é um tipo de dado usando struct e typedef.

/* A função malloc é usada para alocar um bloco de memória do 
tamanho especificado em bytes. Ela retorna um ponteiro para o 
início do bloco de memória alocado, ou NULL se a alocação falhar. 
O conteúdo da memória alocada não é inicializado, ou seja, pode 
conter lixo. */

// Logo, retorna um ponteiro void para o espaço alocado 
// ou null se a alocação falhar.

int *idade = (int *)malloc(4);

// esse 4 representa 4 bytes de memória, tamanho ideal para um int.
// porém, quando não sabemos o tipo de dados, usamos a função sizeof(). 

int *idade = (int *)malloc(sizeof(int));  // ideal.

printf("Qtd. de bytes char: %d\n", sizeof(char));  // 1 byte
printf("Qtd. de bytes int: %d\n", sizeof(int));    // 4 bytes
printf("Qtd. de bytes float: %d\n", sizeof(float));  // 4 bytes 

// Relembrando ponteiros:

int a = 10;
int *p = &a; 

printf("Valor de a: %d\n", a);  // 10
printf("Valor de p: %p\n", p);  // endereço de a
printf("Valor apontado por p: %d\n", *p);  // 10

// Ao utilizar ponteiros, a memória não é alocada automaticamente, 
// então é necessário usar malloc. 

int main() {

    char *nome;
    nome = malloc(sizeof(char) * 5);
    // alocamos 5 bytes para armazenar uma string de 4 caracteres + o caractere nulo '\0'.
    // não entendi muito bem a necessidade de multiplicar o sizeof por algum valor.
    printf("%s",nome);
    return 0;
}
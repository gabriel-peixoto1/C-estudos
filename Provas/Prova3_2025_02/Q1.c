/* Este arquivo contém registros dos livros que podem ser carregados pelo seu sistema, 
com campos separados pelo caractere ponto-e-vírgula (‘;’). Os campos correspondem ao 
1) identificador único do livro; 
2) o título e autores do livro, com o caractere ‘#’ separando-os; 
3) o ano de publicação; 
4) o nome do arquivo com o conteúdo completo do livro. 

Complete a função abaixo, que recebe um identificador de um livro e retorna a sua estrutura 
Livro preenchida. Caso não encontre, a função retorna uma estrutura Livro com campo “id” 
igual a -1. Para lidar com a separação e cópia das strings, use as funções strtok e strcpy. 
Lembre-se de fechar o arquivo antes de sair da função e de fazer conversões de tipo.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Livro {
    int id;              // identificador único do livro
    char info[1000];     // título e autores do livro
    int ano;             // ano de publicação
    char arquivo[100];   // nome do arquivo com o conteúdo do livro
    char *conteudo;      // ponteiro para o conteúdo completo do livro
} Livro;


Livro buscaLivro(int id) {
    FILE *arquivo = fopen("livros.csv","r");
    Livro l; 
    char linha[1000];

    
    while(!feof(arquivo)) {
        fgets(linha,sizeof(linha),arquivo);

        l.id = atoi(strtok(linha,";"));

        if(l.id == id) {
            strcpy(l.info,strtok(NULL,";"));
            l.ano = atoi(strtok(NULL,";"));
            strcpy(l.arquivo,strtok(NULL,";"));
        }

        else {
            l.id == -1;
        }
    }

    fclose(arquivo);
    return l; 
}
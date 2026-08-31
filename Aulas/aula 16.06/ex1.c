#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Livro {
    int id;              // identificador único do livro
    char info[1000];     // título e autores do livro
    int ano;             // ano de publicação
    char arquivo[100];   // nome do arquivo com o conteúdo do livro
    char *conteudo;      // ponteiro para o conteúdo completo do livro
} Livro;

Livro buscaLivro(int id) {
    FILE *arq = fopen("livros.csv", "r");
    char linha[1000];
    Livro x;
    while(!feof(arq)) {
        //lê uma linha do arquivo e armazena em linha:

        fgets(linha, 1000, arq); // 1

        x.id = atoi(strtok(linha, ";")); // lê a linha até o separador ";". O atoi transforma esse pedaço de string em int.

        if(x.id == id) { // 1
            //copia os campos info, ano e arquivo:  
             
           strcpy(x.info,strtok(NULL, ";")); // copiando o pedaço de string para a variável info dentro do livro x.

            x.ano = atoi(strtok(NULL, ";")); // usando o atoi para transformar o ano em int.

            strcpy(x.arquivo,strtok(NULL,"\n")); // vai ler o NULL até encontrar o \n (não tem ";" porque é o último). 
            
            //comandos finais:

           fclose(arq); // 0,5

            return x; // 0,5 
        }
    } //não encontrou o livro:

   x.id == -1; // 1

    fclose(arq); // 0,5

    return x; // 0,5
}




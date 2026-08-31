/* Complete a função abaixo, que carrega todo o conteúdo de um livro para a memória de forma 
incremental. A função deve inicialmente alocar uma área de 100 caracteres e, sempre que essa 
área ficar cheia, utilizar a função dobraMem para mover o conteúdo para uma nova área com o 
dobro do espaço.

Certifique-se de que o campo conteudo da estrutura Livro sempre aponte para a área de memória 
atualmente válida. Ao final do processo, garanta que o conteúdo carregado possa ser interpretado
corretamente como uma string.*/

typedef struct Livro {
    int id;              // identificador único do livro
    char info[1000];     // título e autores do livro
    int ano;             // ano de publicação
    char arquivo[100];   // nome do arquivo com o conteúdo do livro
    char *conteudo;      // ponteiro para o conteúdo completo do livro
} Livro;

void carregaLivro(Livro *x) {
    //lê o arquivo com o conteúdo do livro

    FILE *arq = fopen("livros.csv","r"); // 1
    if(arq == NULL) {
        printf("\nErro ao ler o arquivo!");
        return;
    }
    char c;
    int tam=0, maxtam = 100;
    //aloca uma área de 100 chars para o conteúdo do livro

    char x.conteudo = malloc(maxtam*sizeof(char)); // 1

    while(!feof(arq)) {
        //lê um caractere do arquivo
        fscanf(arq,"%c",c); // 1

        //armazena o caractere lido na área alocada e incrementa tam:
        x.conteudo[tam] = c;
        tam = tam + 1;           // 1 

        //se a memória encheu:         
   
        if(tam == maxtam) { // 1

             dobraMem(x.conteudo,maxtam); // 1
        }
    }
    
    fclose(arq); // 0,5

    x.conteudo[tam+1] = "\0"; // 0,5
} 


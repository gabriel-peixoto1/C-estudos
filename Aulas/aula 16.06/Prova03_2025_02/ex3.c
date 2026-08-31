void carregaLivro(Livro *x) {
    //lê o arquivo com o conteúdo do livro

    FILE *arq = fopen(x->arquivo,"r"); //por algum motivo tem que usar flecha nessa bosta.
    if(arq == NULL) {               // 
        printf("\nErro ao ler o arquivo!");
        return;
    }
    char c;
    int tam=0;
    int maxtam = 100;
    //aloca uma área de 100 chars para o conteúdo do livro

    x -> conteudo = (char*) malloc(100*sizeof(char)); // alocando uma área de 100 caracteres de char (como pedido no enunciado).
    
    while(!feof(arq)) {    //enquanto não for fim do arquivo, faça...
        //lê um caractere do arquivo:

        fscanf(arq;"%c",&c);  // escaneia o(s) caracter(es) e armazena em c. 

        x -> conteudo[tam] = c;    // última casa será 'c'.         
        tam = tam + 1;      // o tam deve ser incrementado de um a cada iteração.       Obs.: Aqui, o professor prefere que escreva tudo em uma linha: x -> conteudo[tam++] = c;
   
        if(tam == maxtam) { // se o tamanho chegou ao máximo, vamos usar a função do ex. anterior.

             x -> conteudo = dobraMem(x -> conteudo,&tam); // dobrando a área de tamanho de memória e armazenando esse novo valor em x.
        }
    }
    
    x -> conteudo[tam] = "\0"; // como é string, o último caracter deve ser o '/0'. 

    fclose(arq); // fechando o arquivo.
} 
char *dobraMem(char *s, int *n) {

    char *s2 = (char*) malloc(*n*2*sizeof(char)); //criando o espaço que cabe o dobro do tamanho da memória atual.
    int i;

    for(i=0;i<*n;i++) {
        s2[i] = s[i];       // copiando todos os dados de s para s2.  
    }                   // daria para usar strcpy(s2,s) também. 

    free(s);    // liberando o s depois de transferir ele para o s2. 
    *n = *n*2; 
    return s2;
}
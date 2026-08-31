


void batalha() { 
 
   int n, l1, l2; 
 
   Lutador *lutadores = carrega_lutadores(*n); //1 
 
    while(n>1) { //1 
 
        l1 = randint(0,n-1); //0.5 
 
        l2 = randint(0,n-1); //0.5 
        
        if(l1 != l2) { 
 
            ataque(lutadores[l1],lutadores[l2]); //1 
 
            eliminaLutador(lutadores,l2,*n); //1 
 
            if(n == 1) //1 
 
            printf("\nVencedor:%s", lutadores[0].nome); //1 
        } 
   } 
 
   free(lutadores[0]); // SEMPRE QUE FOR LIBERAR UM VETOR, LIBERAR PRIMEIRO SEUS ELEMENTOS E DEPOIS O PRÓPRIO VETOR. 
 
   fclose(lutadores); //1 
} 
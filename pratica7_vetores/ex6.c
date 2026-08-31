
void mediaMovel(int n, float v[], int k, float m[]) {

    int i,j; 
    float soma = 0;
    
    for(i=0;i<n;i++) {
    soma = 0;               // a soma deve ser zerada antes de cada interação do 'j'. 
        for(j=i;j<k+i;j++){         // a média vai se deslocando de 'i' em 'i'. 
            soma = soma + v[j];
        }
    m[i] = (soma/k);        // o valor da media só deve ser atribuído FORA da iteração do 'j'.
    }
}

// sem ajuda de IA aqui meu parceiro, chamaaaaaaaaa 
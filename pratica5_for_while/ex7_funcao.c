int somadiv(int n) {
    
    int i = 0;
    int soma = 0;

    for (i = 1; i <= n; i = i + 1) {
        if(n % i == 0) {
            soma = soma + i;
            }
    }   

    return soma;
}
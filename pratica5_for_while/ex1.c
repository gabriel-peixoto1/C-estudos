int soma (int n) {

    int soma = 0;
    int i = 0;

    while (i <= n) {
        soma = soma + i;
        i = i + 1;
    }

    return soma;
}
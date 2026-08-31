int fibonacci (int n) {

    if (n <= 0 || n > 30) return -1;

    if (n == 1) return 1;
    if (n == 2) return 1;

    int a = 1, b = 1, prox;
    int i;

    for (i = 3; i <= n; i++) {
        prox = a + b;
        a = b;
        b = prox;
    }

    return b;
}
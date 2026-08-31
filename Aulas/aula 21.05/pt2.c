#include <stdio.h>

// fazendo o mesmo programa, usando struct (estruturas);
// funcionando.


struct fracao {
    int num;
    int den;
};          // usar ; no final do struct.

struct fracao MultFracao(struct fracao f1, struct fracao f2) {

    struct fracao resultado;

    resultado.num = f1.num * f2.num;
    resultado.den = f1.den * f2.den;

    return resultado;
}

int main() {

    struct fracao x, y, res;

    scanf("%d%d", &x.num, &x.den);
    scanf("%d%d", &y.num, &y.den);

    res = MultFracao(x, y);

    printf("\nResultado: %d/%d\n", res.num, res.den);

    return 0;
}
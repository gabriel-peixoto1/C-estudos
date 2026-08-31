// usando typedef;

#include <stdio.h>

// typedef tipo_antigo tipo_novo ;
typedef int inteiro;
typedef float fracionario;
typedef struct fracao {
    inteiro num;
    inteiro den;
} fracao;       // transformando 'struct fracao' em 'fracao' para facilitar. 



fracao MultFracao(fracao f1, fracao f2) {

    fracao resultado;

    resultado.num = f1.num * f2.num;
    resultado.den = f1.den * f2.den;

    return resultado;
}

int main() {

    fracao x, y, res;

    scanf("%d%d", &x.num, &x.den);
    scanf("%d%d", &y.num, &y.den);

    res = MultFracao(x, y);

    printf("\nResultado: %d/%d\n", res.num, res.den);

    return 0;
}
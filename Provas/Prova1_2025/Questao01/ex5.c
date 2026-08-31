#include <stdio.h>
#include "prova1.h"

int main() {
    char a, b, c;
    scanf("%c %c %c", a, b, c)

int primeira, segunda;
char A, B, C;

    primeira = contemApenasUmNumero(a,b,c);

    segunda = verifica(a,b,c);

    if (primeira == 0 || segunda == 0) {
        printf(/n"Erro!"/n)
        return -1; }

    else {
        A = colocaMaiuscula(a); 
        B = colocaMaiuscula(b);
        C = colocaMaiuscula(c);

printf("PIN aceito: %c%c%c",A,B,C);
    return 0;}
}
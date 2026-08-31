#include <stdio.h>

int main() {
    float a, b, resultado;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &op); // espaço antes do %c evita problemas com '\n'

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch (op) {
        case '+':
            resultado = a + b;
            printf("%.2f %c %.2f = %.2f\n", a, op, b, resultado);
            break;

        case '-':
            resultado = a - b;
            printf("%.2f %c %.2f = %.2f\n", a, op, b, resultado);
            break;

        case '*':
            resultado = a * b;
            printf("%.2f %c %.2f = %.2f\n", a, op, b, resultado);
            break;

        case '/':
            if (b == 0) {
                printf("Erro! Divisao por zero nao e permitida.\n");
            } else {
                resultado = a / b;
                printf("%.2f %c %.2f = %.2f\n", a, op, b, resultado);
            }
            break;

        default:
            printf("Operador invalido!\n");
    }

    return 0;
}
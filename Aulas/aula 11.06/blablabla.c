#include <stdio.h>

int main() {
    FILE *arquivo = fopen("saida.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar arquivo.\n");
        return 1;
    }

    for (int i = 1; i <= 20; i++) {
        fprintf(arquivo,
                "Linha %d: Testando uma saída muito grande.\n",
                i);
    }

    fclose(arquivo);

    return 0;
}
#include <stdio.h>

int main() {
    // pegar dimensões da matriz;
    int l,c;   // l = linhas, c = colunas.
    scanf("%d %d", &l, &c);
    int m1[l][c];
    int m2[l][c];
    int i, j;

    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    int sum[l][c];
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
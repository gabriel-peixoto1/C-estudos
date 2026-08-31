#include <stdio.h>

void decrescente(int n) {
    if(n<0) {
        return;
    }
    decrescente(n-1);
    printf("%d\n",n);
}

int main() {

    decrescente(4);

    return 0;
}
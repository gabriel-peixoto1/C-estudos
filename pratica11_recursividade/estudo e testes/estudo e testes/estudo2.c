#include <stdio.h>

int soman(int n) {
    
    if(n==0) {
        return 0;
    }

    return n + soman(n-1);
}

int main() {

    printf("%d",soman(5));

    return 0;
}
#include <stdio.h>

int fibonacci(int n) {

    if(n == 0) {
        return 1;
    }

    else if(n == 1) {
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {

    printf("fibonacci(5): %d",fibonacci(5));



    return 0;
}
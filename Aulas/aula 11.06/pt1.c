#include <stdio.h>

void foo(int n) {
printf("%d\n", n);
foo(n - 1);
}

int main() {
foo(4);
return 0;
}

// esse programa tem um problema de recursão infinita, pois a 
// função foo chama a si mesma sem uma condição de parada.
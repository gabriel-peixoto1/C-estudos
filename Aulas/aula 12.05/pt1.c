#include <stdio.h>

void alterar(int x, int y, int z) {

printf("Valores recebidos: %d, %d, %d\n",x,y,z);
    x++;
    y++;
    z++;
printf("Valores novos: %d, %d, %d\n",x,y,z);
}

int main() {
    int a = 1, b = 2, c = 3; 
    alterar(a,b,c);
    return 0;
}
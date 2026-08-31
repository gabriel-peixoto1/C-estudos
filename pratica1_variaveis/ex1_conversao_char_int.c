/* Escreva um programa para imprimir os cinco caracteres contidos em "PDS-1" 
usando a codificação ASCII. Seu programa deve usar a função printf, 
e os códigos ASCII devem ser impressos com um espaço entre eles. */ 

// obs.: para transformar caracteres em seu codigo ASCII, basta mudar o 
// formato dele de %c (character) para %d (inteiro).

# include <stdio.h>

int main() {

    printf("resultado eh:\n%d\n%d\n%d\n%d\n%d\n",'P','D','S','-','1');
    return 0;
}
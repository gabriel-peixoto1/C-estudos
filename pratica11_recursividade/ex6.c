/* Escreva uma função recursiva que receba uma string como parâmetro e imprima essa string 
invertida. A função deve imprimir os caracteres da string em ordem reversa, utilizando recursão.

Protótipo:
void imprimeInvertida(char str[]);

Exemplo:
Para a string "abc", a saída deve ser:
cba */

#include <stdio.h>
#include <string.h>

void imprimeInvertida(char str[]) {

    // obs.: esse foi o chat, mas eu saberia fazer com iterador. 
    
    if(str[0] == '\0')
        return;

    imprimeInvertida(str + 1); // O vetor str de 'char' lê o primeiro elemento da string. Como se fosse &str[0]. Então, vira um ciclo gigante de (((str+1)+1)+1)... até chegar no último elemento antes do final. Esse elemento se torna então o str[0], ou seja, o primeiro da string e é impresso. 

    printf("%c", str[0]);
}

int main() {

    char str[] = {"Gabriel"}; 

    imprimeInvertida(str);

    return 0;
}

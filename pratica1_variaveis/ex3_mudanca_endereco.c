/* 
#include <stdio.h>

void main() {
    float a = 3.14159, b = 2.71828;

    printf("\nPi = %f", b);
    printf("\nEuler = %f", a);
} 

Altere o programa acima de forma a corrigir o erro do programador. 
No entanto, você não pode modificar nenhuma linha do código original 
e nem digitar novamente os valores das constantes 3.14159 e 2.71828.

Dica: Troque os valores armazenados em cada variável.
*/ 

#include <stdio.h>

void main() {
    float a = 3.14159, b = 2.71828; 
    
    float *ea = &a;
    float *eb = &b;
    
    float auxiliar = *eb;
    *eb = *ea;
    *ea = auxiliar;


    printf("\nPi = %f", b);
    printf("\nEuler = %f", a);
} 


// primeiro, defini ea e eb como os enderecos de a e b.
// depois, guardei o valor do eb em uma variavel auxiliar. 
// depois, substitui o valor do endereco de b pelo endereco de a. 
// depois, substitui o valor do endereco de a pelo endereco de b (atraves da auxiliar).


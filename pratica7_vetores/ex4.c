/*
Neste exercício você deve criar uma função que recebe três parâmetros: 
o tamanho dos vetores e dois vetores do tipo float, ambos declarados com valor indefinido. 
Para calcular o produto escalar, ou produto interno, você deve multiplicar os elementos na 
mesma posição e depois somá-los. 
*/

float produtoEscalar(int n, float v1[n], float v2[]) {

float soma = 0;
int i;

for(i=0;i<n;i++) {
    soma = soma + v1[i]*v2[i];
}

return soma;
}
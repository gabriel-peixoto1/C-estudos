#include <stdio.h>
#include "prova1.h"

int main() {

    float preco;
    int quantidade;
    int total;
    char formaPagamento;
    int av;
    

    scanf("%f %d",&preco,&quantidade);

    if (verificaValores(preco,quantidade) == 0) {
        printf("erro!\n");
    }
    else {
        total = calculaDesconto(preco,quantidade);
        scanf("%c",&formaPagamento);

        av = atualizaTotal(&total,formaPagamento);

        if(av == -1) {
            printf("erro na forma de pagamento.\n");
        }

        else {
            printf("valor total da compra: %d",total);
        }
    }

return 0;

}
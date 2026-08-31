#include "prova1.h"

int atualizaTotal(float *total, char pagamento) {
    if (pagamento == 'P' || pagamento == 'D') {
        *total = (*total) * 0.95;
        return 0; 
    }
    else if (pagamento == 'C') {
        *total = (*total) * 1.03;
        return 0;
    }
    else if (pagamento == 'L') {
        int sorteado = sorteio(1,9);
        if (*total % 10 = sorteado){
            *total = (*total) * 0.5;
        }
        else {
            *total = (*total) * 0.95;
        }
        return 0;
    }

    else {
        return -1;
    }
 }
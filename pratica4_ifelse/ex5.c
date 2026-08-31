#include <stdio.h>
#include <math.h>

int main() {
    
    int dia, mes, ano;
    scanf("%d %d %d",&dia,&mes,&ano);

    if (dia >= 1 && dia <= 28 && mes >= 1 && mes <= 12 && ano >= 1) printf("Data Valida"); 
    else if (dia >= 29 && dia <= 30 && mes != 2) printf("Data Valida");
    else if (dia == 29 && mes == 2 && ano % 4 == 0) printf("Data Valida");
    else if (dia == 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)) printf("Data Valida");
    else printf("Data Invalida");

    return 0;
}

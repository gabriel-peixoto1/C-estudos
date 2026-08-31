#include <stdio.h>

int main() {
    int idade,tempcont;
    char sexo;
    scanf("%d %d %c",&idade,&tempcont,&sexo);

    if (sexo == 'M' && tempcont >= 35 && idade >= 60) printf("Pode aposentar");
    else if (sexo == 'M' && idade >= 65) printf("Pode Aposentar");
    else if (sexo == 'F' && idade >= 55 && tempcont >= 30) printf("Pode Aposentar");
    else if (sexo == 'F' && idade >= 60) printf("Pode aposentar");
    else printf("Nao pode aposentar");

    return 0;
}
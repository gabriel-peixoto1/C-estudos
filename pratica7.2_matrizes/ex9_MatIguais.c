/*
Neste exercício, implemente uma função chamada verificamatrizigual que recebe, nesta ordem: 
o número de linhas de A (an), o número de columnas de A (am), uma matriz A de tamanho an x am, 
o número de linhas de B (bn), o número de columnas de B (bm) e uma matriz B de tamanho bn x bm. 
A função retorna um inteiro. 

Você vai precisar verificar se as duas matrizes são iguais e contém os mesmos elementos. 
Se as matrizes forem diferentes, você vai precisar retornar 0, se são iguais deve retornar 1.
*/

verificamatrizigual(int an,int am,int a[an][am],int bn, int bm, int b[bn][bm]) {

int i, j;
int dif = 0;


    if (an == bn && am == bm) {
        for(i=0;i<an;i++){
            for(j=0;j<am;j++){
                if(a[i][j] != b[i][j]){
                    dif = dif + 1;
                }
            }
        }
    }
    else 
        return 0;

    if(dif == 0) 
        return 1;
    else
        return 0;

}

// de primeira e sem IA nessa porra!!!!!
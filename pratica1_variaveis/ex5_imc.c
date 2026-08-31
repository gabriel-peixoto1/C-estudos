#include <stdio.h>

int main() {

    float altura_b = 1.84;
    float peso_b = 122;

    float altura_o = 1.76;
    float peso_o = 45;

    float imc_max = 25;
    float imc_min = 18.5;

    float peso_max_b = imc_max * altura_b * altura_b;
    float peso_min_o = imc_min * altura_o * altura_o;

    float perder = peso_b - peso_max_b;
    float ganhar = peso_min_o - peso_o;

    printf("%.1f %.1f\n", perder, ganhar);

    return 0;
}
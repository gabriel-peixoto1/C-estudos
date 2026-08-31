#include <stdio.h>
#include <math.h>

int main() {
    float vmax,vreg;
    scanf("%f %f", &vmax,&vreg);

    if (vreg <= vmax) printf("Sem infracao");
    if (vreg > vmax && vreg <= vmax*1.20) printf("Infracao Media");
    if (vreg > vmax*1.20 && vreg <= vmax*1.50) printf("Infracao Grave");
    if (vreg > vmax*1.50) printf("Infracao Gravissima");

    return 0;
}
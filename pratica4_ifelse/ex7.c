#include <stdio.h>

float arredonda(float num) {

    if(num - (int)num < 0.5) return (int)num;
    else (num - (int)num >= 0.5); return num - (num - (int)num - 1);

}
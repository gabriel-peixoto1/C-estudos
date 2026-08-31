#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} ponto;

float dist(ponto p1, ponto p2) {
    return sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
}

int main() {

    float x1, y1, x2, y2;
    ponto p1;
    ponto p2;

    scanf("%f %f %f %f", &p1.x,&p1.y,&p2.x,&p2.y);

    printf("%.2f",dist(p1,p2));

    return 0;
}
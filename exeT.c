#include <stdio.h>

int main(){

    float v,d,t;

    printf("Informe a distancia percorrida em km: ");
    scanf("%f", &d);

    printf("Informe o tempo gasto: ");
    scanf("%f", &t);

    v = (d * 1000) / (t * 60);

    printf("A velocidade do projetil foi de %f", v);

    return 0;
}
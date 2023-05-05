#include <stdio.h>

int main(){

    float a,b;

    printf("Informe a medida em pes: ");
    scanf("%f", &a);

    b = a * 0.3048;

    printf("A medida em metros e %f", b);

    return 0;
}
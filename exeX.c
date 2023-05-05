#include <stdio.h>
#include <math.h>

int main(){

    float b,i,r;

    printf("Informe a base: ");
    scanf("%f", &b);

    printf("Informe o indice: ");
    scanf("%f", &i);

    r = pow(b, 1 / i);

    printf("A resutado do calculo e %f", r);

    return 0;


}
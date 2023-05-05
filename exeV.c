#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c;

    printf("Informe um valor da base: ");
    scanf("%f", &a);

    printf("Informe o valor do expoente: ");
    scanf("%f", &b);

    c = pow(a,b);

    printf("O resultado do calculo e %f", c);

    return 0;
}
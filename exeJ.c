#include <stdio.h>

int main(){

    float a,b,c;

    printf("Informe um numero: ");
    scanf("%f", &a);

    printf("Informe outro numero: ");
    scanf("%f", &b);

    c = (a - b) * (a - b);

    printf("O quadrado da diferenca e %f", c);

    return 0;
}
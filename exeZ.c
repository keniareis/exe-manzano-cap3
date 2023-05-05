#include <stdio.h>

int main(){

    float a,b,c;

    printf("Digite um numero: ");
    scanf("%f", &a);

    printf("Digite outro numero: ");
    scanf("%f", &b);

    c = (a / b) * (a / b);

    printf(" o valor do quadrado da divisao e %f", c);

    return 0;
}
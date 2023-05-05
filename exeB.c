#include <stdio.h>

int main(){

    float F, C;

    printf("Escreva a temperatura em Fahrenheit : ");
    scanf("%f", &F);

    C= ((F-32) * 5) / 9;

    printf("a temperatura em Celsius e: %.2f", C);
    return 0;
}
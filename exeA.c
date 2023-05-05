#include <stdio.h>

int main(){

    float F, C;

    printf("Escreva a temperatura em celsius: ");
    scanf("%f", &C);

    F=C*9/5+32;

    printf("a temperatura em Fahrenheit e: %.2f", F);
    return 0;
}

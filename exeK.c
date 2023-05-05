#include <stdio.h>

int main(){ 

    float rs, us, co;

    printf("Informe a quantidade de dolares: ");
    scanf("%f", &us);

    printf("Informe a cotacao atual: ");
    scanf("%f", &co);

    rs = us * co;
    
    printf("A conversao de dolar para real equivale a %.2f", rs);

    return 0;
}
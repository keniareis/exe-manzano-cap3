#include <stdio.h>

int main(){ 

    float rs, us, co;

    printf("Informe a quantidade de reais: ");
    scanf("%f", &rs);

    printf("Informe a cotacao atual: ");
    scanf("%f", &co);

    us = rs / co;
    
    printf("A conversao de real para dolar equivale a %.2f", us);

    return 0;
}
#include <stdio.h>

int main(){

    float P, V, TA, TE;

    printf("Informe o valor: ");
    scanf("%f", &V);

    printf("Informe a taxa: ");
    scanf("%f", &TA);

    printf("Informe o tempo: ");
    scanf("%f", &TE);

    P= V+(V*(TA/100)*TE);

    printf("O valor da prestacao e %.2f em reais", P);

}
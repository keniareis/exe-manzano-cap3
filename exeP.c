#include <stdio.h>

int main(){

    float sm,pr,vr,ns;

    printf("Informe o valor do salario mensal: ");
    scanf("%f", &sm);

    printf("Informe o valor do percentual de reajuste: ");
    scanf("%f", &pr);

    vr = sm * pr / 100;
    ns = sm + vr;

    printf("O valor do novo salario e %.2f", ns);

    return 0;
}
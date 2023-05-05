#include <stdio.h>

int main(){

    float a,r;

    printf("Informe o tamanho do raio da circunferencia: ");
    scanf("%f", &r);

    a = 3.14159265 * (r * r);

    printf("O valor da area da circunferencia e %.2f", a);

    return 0;
}
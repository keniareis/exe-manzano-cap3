#include <stdio.h>

int main(){
 
    float a,b,s,su,m,d;

    printf("Digite um numero inteiro: ");
    scanf("%f", &a);

    printf("Digite outro numero inteiro: ");
    scanf("%f", &b);

    s = a + b;
    su = a - b;
    m = a * b;
    d = a / b;

    printf("O valor da soma e %f\n", s);
    printf("O valor da subtracao e %f\n", su);
    printf("O valor da multiplicacao  e %f\n", m);
    printf("O valor da divisao e %f", d);

    return 0;

}
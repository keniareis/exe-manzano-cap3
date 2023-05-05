#include <stdio.h>

int main(){

    int a,b,c,d,p,s;

    printf("Informe quatro numeros inteiros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    p = a * c;
    s = b + d;

    printf("O produto de %d vezes %d e %d\n", a, c, p);
    printf("A soma de %d mais %d e %d\n", b, d, s);

    return 0;
}
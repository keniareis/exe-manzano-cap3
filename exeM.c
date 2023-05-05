#include <stdio.h>

int main(){

    int a,b,c,s;

    printf("Informe tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    s = (a * a) + (b * b) + (c * c);

    printf("O valor da soma dos quadrados dos tres valores e %.2d", s);

    return 0;
}
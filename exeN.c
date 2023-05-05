#include <stdio.h>

int main(){

    int a,b,c,s;

    printf("Informe tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    s = (a + b + c) * (a + b + c);

    printf("O valor do quadrado da soma dos tres valores e %.2d", s);

    return 0;
}
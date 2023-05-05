#include <stdio.h>

int main(){
    int a;

    printf("Informe um numero inteiro: ");
    scanf("%d", &a);

    a = a * a;

    printf("O valor elevado ao quadrado e %d", a);
}
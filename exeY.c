#include <stdio.h>

int main(){

    int a,b,c;

    printf("Digite um numero: ");
    scanf("%d", &b);

    a = b - 1;
    c = b + 1;

    printf("O valor do antecessor e sucessor respectivamente e %d e %d", a, c);

    return 0;

}
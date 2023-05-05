#include <stdio.h>

int main(){

    float v,r;

    printf("Informe o valor do raio: ");
    scanf("%f", &r);

    v = (4 / 3) * 3.14159 * (r * r * r);

    printf("O volume da esfera e %f", v);

    return 0;

}
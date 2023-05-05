#include <stdio.h>

int main(){
    float pi = 3.14159;     
    float V, A, R;

    printf("Escreva o Raio: ");
    scanf("%f", &R);

    printf("Ecrava a Altura: ");
    scanf("%f", &A);

    V = pi*R*R*A;

    printf("O volume da lata de oleo e: %.2f", V);
    
    return 0;

}
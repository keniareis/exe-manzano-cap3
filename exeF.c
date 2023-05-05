#include <stdio.h>

int main(){

  float A, B, C;
  
    printf("digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    C=A;
    A=B;
    B=C;

      printf("Os valores de A e B agora sao respectivamente %.2f, %.2f", A, B);
      
  return 0;

}
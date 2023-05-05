#include <stdio.h>

int main(){
   int v,c,l,a;

   printf("Informe o comprimento: ");
   scanf("%d", &c);

   printf("Informe a Largura: ");
   scanf("%d", &l);

   printf("Informe a altura: ");
   scanf("%d", &a);

   v = c * l * a;

   printf("O volume da caixa e: %.2d", v);

   return 0;
}
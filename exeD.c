#include <stdio.h>

int main(){
 
   float T, V, D, LU;

   printf("Escreva o tempo em horas: ");
   scanf("%f", &T);

   printf("Escreva a velocidade em Km/h: ");
   scanf("%f", &V);

   D = T * V;
   LU = D/12;

   printf("O tempo gasto foi %.2f horas, a velocidade foi %.2f km/h, a distancia percorrida foi %.2f kilometros, e a quantidade de litros usados foi %.2f", T, V, D, LU);

}
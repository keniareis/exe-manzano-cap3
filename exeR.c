#include <stdio.h>

int main(){

    float a,b,c,vn,vb,t,pvv,pa,pb,pc,pvn,pvb;

    printf("Informe a quantidade de votos do candidato A: ");
    scanf("%f", &a);

    printf("Informe a quantidade de votos do candidato B: ");
    scanf("%f", &b);

    printf("Informe a quantidade de votos do candidato C: ");
    scanf("%f", &c);

    printf("Informe a quantidade de votos nulos: ");
    scanf("%f", &vn);

    printf("Informe a quantidade de votos brancos: ");
    scanf("%f", &vb);

    t = a + b + c + vn + vb;
    pvv = (a + b + c) * 100 / t;
    pa = a * 100 / t;
    pb = b * 100 / t;
    pc = c * 100 / t;
    pvn = vn * 100 / t;
    pvb = vb * 100 / t;

    printf("O valor total de votos e %f\n", t);
    printf("O valor do percentual de votos validos e %f\n", pvv);
    printf("O valor do percentual de votos do candidato A e %f\n", pa);
    printf("O valor do percentual de votos do candidato B e %f\n", pb);
    printf("O valor do percentual de votos do candidato C e %f\n", pc);
    printf("O valor do percentual de votos nulos e %f\n", pvn);
    printf("O valor do percentual de votos brancos e %f\n", pvb);

   return 0;

}
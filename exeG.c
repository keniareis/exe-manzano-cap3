#include <stdio.h>

int main (){

    int a,b,c,d,s1,s2,s3,s4,s5,s6,m1,m2,m3,m4,m5,m6;

    printf("Escreva quatro valores inteiros: ");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    
    s1 = a + b;
    s2 = a + c; 
    s3 = a + d;
    s4 = b + c;
    s5 = b + d;
    s6 = c + d;

    m1 = a * b;
    m2 = a * c;
    m3 = a * d;
    m4 = b * c;
    m5 = b * d;
    m6 = c * d;

    printf("As somas sao: %d, %d, %d, %d, %d, %d\n", s1, s2, s3, s4, s5, s6);
    printf("As Multiplicacoes sao: %d, %d, %d, %d, %d, %d\n", m1, m2, m3, m4, m5, m6);


    return 0;

}
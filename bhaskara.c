#include <stdio.h>
#include <math.h>

int main(void){

    float a, b ,c;
    float delta;
    float x1, x2;
    float raiz;

    printf("Digite os valores correspondentes a A, B e C, respectivamente: \n");
    scanf("%f %f %f", &a, &b, &c);

    delta = (b*b)-4*(a*c);
    raiz = sqrt(delta); //funcao que calcula a raiz quadrada de um numero

    x1 = (-b-(raiz))/(a*2);
    x2 = (-b+(raiz))/(a*2);

    printf("\nEstes sao os valores possiveis para x:\n");
    printf("X1(negativo): %2.f\n", x1);
    printf("X2(positivo): %2.f\n", x2);

    return 0;
}
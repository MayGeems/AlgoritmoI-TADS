#include <stdio.h>

int main(void){

    float a=0, b=0, c=0;
    float soma=0, divisao=0, todos=0;

    printf("Digite tres valores: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    soma = a + b;
    divisao = soma / c;
    todos = a + b + c;

    printf("Soma: %.2f\n", soma);
    printf("Divisao: %.2f\n", divisao);
    printf("Soma de todos: %.2f", todos);

    return 0;
}
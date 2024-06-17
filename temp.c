#include <stdio.h>

int main(void){

    float c=0, f=0;

    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &c);

    f = ((c * 9/5) + 32);

    printf("Em celsius: %.2fC", c);
    printf("\nEm fahrenheist: %.2fF", f);

    return 0;
}
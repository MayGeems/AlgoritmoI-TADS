#include <stdio.h>

int main(void){

    float v;

    printf("Digite um numero: ");
    scanf("%f", &v);

    if(v>10){
        printf("%2.f e maior que 10", v);
    }else if(v<10){
        printf("%2.f e menor que 10", v);
    }

    return 0;
}
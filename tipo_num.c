#include <stdio.h>
int main(void){
    float n;
    int i;
    printf("Digite um numero: ");
    scanf("%f", &n);
    i=n;
    if(n==i){
        printf("%f e um numero inteiro", n);
    }else if(n>0){
        printf("%f e um numero natural", n);
    }else{
        printf("%f e um numero racional", n);
    } 
    return 0;
}
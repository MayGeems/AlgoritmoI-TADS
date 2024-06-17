#include <stdio.h>
#include <math.h>

int main(void){

    int a,b;
    int m;
    int x;
    int n=1;

    printf("Digite um intervalo de numeros: ");
    scanf("%d %d", &a, &b);

    printf("Digite o multiplo: ");
    scanf("%d", &m);

    for(x=a;x<=b;x++){
        if(x%m==0){
            printf("%d - %d\n", n,x);
            n++;
        }
    }
    return 0;
}
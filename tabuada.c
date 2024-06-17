#include <stdio.h>
#include <math.h>

int main(void){

    int x;
    int n;

    printf("Digite um algarismo: ");
    scanf("%d", &n);

    printf("TABUADA DO %d\n", n);
    for(x=0; x<=10; x++){
        printf("%d x %d = %d\n", n,x, n*x);
    }
    return 0;
}
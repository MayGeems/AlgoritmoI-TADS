#include <stdio.h>
#include <math.h>

int main(void){

    int x;
    int n;
    int result=1;

    printf("Digite o numero que deseja saber o fatorial: ");
    scanf("%d", &n);

    for(x=n;x>=1;x--){
        result*=x;
        printf("%d ", x);
        if(x!=1){
            printf("x ");
        }
    }
    
    printf("= %d", result);
    return 0;
}
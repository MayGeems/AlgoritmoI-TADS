#include <stdio.h>
#include <math.h>

int main (void){

    int n_1, n_2;
    int res;

    printf("Informe um numero: ");
    scanf("%d", &n_1);

    printf("Informe o numero que deseja calcular a multiplicidade:");
    scanf("%d", &n_2);

    res=n_1%n_2;
    printf("%d\n", res);

    if(res==0){
        printf("%d e multiplo de %d", n_1, n_2);
    }
    else{
        if(res<=3 && n_2%2>=res){
            printf("%d nao e multiplo de %d, mas o multiplo mais proximo e %d ", n_1, n_2, n_1-res);
        }else{
            printf("%d nao e multiplo de %d, mas o multiplo mais proximo e %d ", n_1, n_2, n_1+(n_2-res));
        }
    }

    return 0;
}
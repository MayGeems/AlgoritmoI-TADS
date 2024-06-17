#include <stdio.h>

int main(void){

    float latao=0, zinco=0, cobre=0;
    
    printf("Digite a quantidade de latao que queres produzir em quilos: ");
    scanf("%f", &latao);

    zinco = latao * 0.3;
    cobre = latao * 0.7;

    printf("Quantidades: \n");
    printf("Zinco: %.2fkg \n", zinco);
    printf("Cobre: %.2fkg \n", cobre);

    return 0;

}
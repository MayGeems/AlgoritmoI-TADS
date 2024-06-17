#include <stdio.h>

int main(void){

    float prec_fab, cust_fab=0, lucro=0, trib=0;

    printf("Digite o valor do veículo a preco de fabrica: ");
    scanf("%f", &prec_fab);

    cust_fab = prec_fab * 1.25;
    lucro = cust_fab * 1.28;
    trib = lucro * 1.2;

    printf("Custo final: RS%.2f", trib);

    return 0;
}
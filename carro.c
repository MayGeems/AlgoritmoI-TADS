#include <stdio.h>

const float distancia = 530.00, valorRS = 6.15, valorDol = 4.97, valorGasD = 2.3;

int main(void)
{

    float tamanhoDoTanque, kmPL, numTank;
    float autonomia;
    float valorT;

    printf("Digite o tamanho do tanque:");
    scanf("%f", &tamanhoDoTanque);
    printf("Quanto ele faz pro litro:");
    scanf("%f", &kmPL);

    autonomia = tamanhoDoTanque * kmPL;
    valorT = tamanhoDoTanque * valorRS;
    numTank = ((distancia - autonomia) / autonomia);
    valorT += ((tamanhoDoTanque * valorGasD) * valorDol) * numTank;

    printf("O valor vai ser:R$%.2f", valorT);
    return 0;
}
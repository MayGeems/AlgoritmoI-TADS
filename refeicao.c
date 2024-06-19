#include <stdio.h>
#include <math.h>

int main(void){

    float kg=0, preco=17.00, total, pago, troco=0;
    int n;

    do{
        
        printf("Informe o peso do prato em Kg:\n");
        scanf("%f", &kg);

        if(kg > 0.7){
            total+= 12;
        }else{
            total+= kg * preco;
        }
        printf("\nDeseja somar mais um prato?\n1-Sim\t2-Nao\n");
        scanf("%d", &n);
    }while(n==1);

   

    printf("\nO valor devido e R$%.2f. Informe a quantia paga:", total);
    scanf("%f", &pago);

    troco=pago-total;

    if(troco!=0){
        printf("\nSeu troco e de R$%.2f! Obrigado pela preferencia!", troco);
    }else{
        printf("Obrigado pela preferencia!");
    }

    return 0;
}
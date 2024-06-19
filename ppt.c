#include <stdio.h>
#include <time.h>

int main(){

    int jog;
    int comp;
    char n;

    do{
        printf("\nESCOLHA ENTRE AS OPÇOES: \n1-PEDRA \n2-PAPEL \n3-TESOURA\n");
        scanf("%d", &jog);

        srand(time(NULL));
        comp=("%d", rand()%3+1);

        switch(jog){
            case 1: 
                printf("Voce escolheu PEDRA");
                break;
            case 2: 
                printf("Voce escolheu PAPEL");
                break;
            case 3: 
                printf("Voce escolheu TESOURA");
                break;
            default:
                printf("ESSA OPÇAO NAO EXISTE");
                break;
        }
        switch(comp){
            case 1: 
                printf("\nComputador escolheu PEDRA");
                break;
            case 2: 
                printf("\nComputador escolheu PAPEL");
                break;
            case 3: 
                printf("\nComputador escolheu TESOURA");
                break;
            default:
                printf("\nComputador OPÇAO NAO EXISTE");
                break;
        }

        if(jog==comp){
            printf("\nEMPATE!");
        }else if(jog==1&&comp==3||jog==1&&comp==1||jog==3&&comp==2){
            printf("\nVOCE VENCEU!");
        }else{
            printf("\nVOCE PERDEU\nou numero digitado nao corresponde as opcoes, tente novamente");
        }

        printf("\nDeseja jogar outra rodada?\nS-Sim\tN-Nao\n");
        scanf(" %c", &n);
    }while(n=='s'||n=='S');
    return 0;

}
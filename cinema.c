#include <stdio.h>
#include <math.h>

int main(void){

    float valor_ini;
    char tipo='N';
    int n_ingr = 0;
    float fatu = 0;

    while(tipo!='F'){
                valor_ini=10;
                printf("Informe se voce e: \tAposentado - A\tEstudante - E \tNenhum - N\n");
                printf("Ou utilize F para finalizar o programa\n");
                scanf(" %c", &tipo);

                switch(tipo){
                    case 'a':
                    case 'A': 
                        valor_ini *= 0.7;
                        n_ingr++;
                        fatu+=valor_ini;
                        printf("Seu valor e R$%.2f\n\n", valor_ini);
                        break;
                    case 'e':
                    case 'E': 
                        valor_ini *= 0.5;
                        n_ingr++;
                        fatu+=valor_ini;
                        printf("Seu valor R$%.2f\n\n", valor_ini);
                        break;
                    case 'n':
                    case 'N':
                        n_ingr++;
                        fatu+=valor_ini;
                        printf("Seu valor R$%.2f\n\n", valor_ini);
                        break;
                    case 'f':
                    case 'F':
                        printf("O total de ingressos vendidos foi %d\n", n_ingr);
                        printf("O faturamento total foi de R$%2.f", fatu);
                        break;
                    default:
                        printf("Essa opcao nao existe");
                        break;
                }
        }
    return 0;
}
#include <stdio.h>

int main(void){

int idade=0, freq_card=0;
int ano = 2024;
int ano_nasc=0;

printf("Digite seu ano de nascimento: ");
scanf("%d", &ano_nasc);

idade = ano - ano_nasc;

freq_card = 220 - idade;

printf("\nSua frequencia cardiaca máxima será %d", freq_card,"bpm.");

return 0;
}
#include <stdio.h>
#include <string.h>
#define TAM 3

int main(void){

    char nome [TAM][6] = {"Maria", "José", "João"};
    int idade[3] = {20, 30, 40};
    int i = 0;

    do{
        printf("%d | Nome: %s - Idade: %d\n", i+1, nome[i], idade[i]);
        i++;
    }while(i<TAM);
}
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define TAM 5

//não usar do-while para exibir, pois da erro

int main(void){

    char nome [TAM][10] = {"Joao", "Jose", "Jamile", "Julio", "Junior"};
    int notas [TAM][3];
    int i = 0;
    int n = 0;
    int soma;

    srand(time(NULL));

    for (i=0; i<TAM; i++){
        soma=0;
        for(n=0; n<3; n++){
            notas[i][n] = rand() %10;
            soma += notas[i][n];
        }
        notas[i][n] = soma/3;
    }
    
    for (i=0; i<TAM; i++){
        printf("\nALUNO: %s\n", nome[i]);
        for(n=0; n<3; n++){
            printf("Nota %d: %d\n", n+1, notas[i][n]);
        }
        printf("Media: %d\n", notas[i][n]);
    }
}
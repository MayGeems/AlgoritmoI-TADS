#include <stdio.h>
#include <string.h>

int main(void){

    int tam = 15;
    char cep[tam];
    char * pch;

    printf("Informe o CEP: ");
    fgets(cep, tam, stdin);

    pch = strtok (cep, " ,.-");

    while(pch != NULL){
        printf("%s", pch);
        pch = strtok(NULL, " ,.-");
    }

    return 0;
}
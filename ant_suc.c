#include <stdio.h>

//12/03/2024

int main(void){
    
    int ant=0, suc=0, n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    ant = n-1;
    suc = ++n;

    printf("Antecessor: %d", ant);
    printf("\nSucessor: %d", suc);

    return 0;
}
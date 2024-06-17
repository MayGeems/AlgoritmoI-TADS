#include <stdio.h>
#include <math.h>

int main(void){
	int ano=0;

	printf("Digite um ano: ");
	scanf("%d", &ano);
    
    printf(ano);
    if(ano%4==0){
		if(ano%400==0){
			if(ano%100!=0){
				printf("Ano bissexto");
			}
		}
	}else{
		printf(ano, "%d nao e um ano bissexto");
	}
}
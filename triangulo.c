#include <stdio.h>
#include <math.h>

int main(void){
	float a, b, c;
	printf("Digite os lados do triangulo: ");
	scanf("%f %f %f", &a, &b, &c);
	if(a==b && a==b){
		printf("Triangulo equilatero");
	}else if(a==b || a==c || b==c){
		printf("Triangulo isosleses");
	}else{
		printf("Triangulo escaleno");
	}
	return 0;
}
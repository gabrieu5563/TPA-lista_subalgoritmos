#include<stdio.h>

float volume(float _raio){
	float result = 0.75 * 3.14 * (_raio * _raio * _raio);
	return(result);
}

int main(){
	int raio;
	
	printf("Digite o raio da esfera em cm: ");
	scanf("%d", &raio);
	
	printf("O volme da esfera com raio %d e %f cm3", raio, volume(raio));
}

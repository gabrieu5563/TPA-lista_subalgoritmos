#include<stdio.h>

float pesoideal(float _alt, float _sexo){
	float _peso;
	if(_sexo == 1){
		_peso = 72.7 * _alt - 58;
	} else {
		_peso = 62.1 * _alt - 44.7;
	}
	
	return _peso;
}

int main(){
	float alt, sexo, peso;
	
	printf("Digite sua altura em metros: ");
	scanf("%f", &alt);
	printf("Digite seu sexo (1 para masculino e 2 para feminino): ");
	scanf("%f", &sexo);
	
	peso = pesoideal(alt, sexo);
	
	printf("O seu pedo ideal e %.3f kg.", peso);
}

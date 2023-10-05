#include<stdio.h>

void rodizio(int _placa){
	if(_placa == 1 || _placa == 2){
		printf("Rodizio de segunda-feira");
	} else {
		if(_placa == 3 || _placa == 4){
			printf("Rodizio de terca-feira");
		} else {
			if(_placa == 5 || _placa == 6){
				printf("Rodizio de quarta-feira");
			} else {
				if(_placa == 7 || _placa == 8){
					printf("Rodizio de quinta-feira");
				} else {
					if(_placa == 9 || _placa == 0){
						printf("Rodizio de sexta-feira");
					}
				}
			}
		}
	}
}

int main(){
	int placa;
	
	printf("Digite o ultimo numero da placa do carro: \n");
	scanf("%d", &placa);
	
	rodizio(placa);
}

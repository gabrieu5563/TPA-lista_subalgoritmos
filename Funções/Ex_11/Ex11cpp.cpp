#include<stdio.h>

int mencao(float _nota){
	int _conc;
	if(_nota < 5){
		_conc = 1;
	} else {
		if(_nota < 7){
			_conc = 2;
		} else {
			if(_nota < 9){
				_conc = 3;
			} else {
				_conc = 4;
			}
		}
	}
	return _conc;
}

int main(){
	float nota;
	int conc;
	char conceito;
	
	do{
		printf("Digite sua media: ");
		scanf("%f", &nota);
		
		if(nota < 0 || nota > 10){
			printf("Digite um valor valido (entre 0 e 10).\n");
		} else {
			break;
		}
	}while (1);
	
	conc = mencao(nota);
	
	if(conc == 1){
		printf("Conceito D.");
	} else {
		if(conc == 2){
			printf("Conceito C.");
		} else {
			if(conc == 3){
				printf("Conceito B.");
			} else {
				printf("Conceito A.");
			}
		}
	}
}

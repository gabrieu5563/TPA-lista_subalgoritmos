#include<stdio.h>

int categoria(int _idade){
	int result;
	
	if(_idade < 5){
		result = 0;
	} else {
		if(_idade <= 7){
			result = 1;
		} else {
			if(_idade <=10){
				result = 2;
			} else {
				 if(_idade <= 13){
				 	result = 3;
				 } else {
				 	if(_idade < 17){
				 		result = 4;
					 } else {
					 	result = 5;
					 }
				 }
			}
		}
	}
	
	return(result);
}

int main(){
	int idade, cat;
	
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	
	cat = categoria(idade);
	
	if(cat == 0){
		printf("Com %d anos, o nadador nao deve atuar.", idade);	
	} else {
		if(cat == 1){
			printf("Com %d anos, o nadador deve atuar na categoria AnosInfantil A.", idade);
		} else {
			if(cat == 2){
				printf("Com %d anos, o nadador deve atuar na categoria AnosInfantil B.", idade);
			} else {
				if(cat == 3){
					printf("Com %d anos, o nadador deve atuar na categoria AnosJuvenil A.", idade);
				} else {
					if(cat == 4){
						printf("Com %d anos, o nadador deve atuar na categoria AnosJuvenil B.", idade);
					} else {
						printf("Com %d anos, o nadador deve atuar na categoria Adulto.", idade);
					}
				}
			}
		}
	}
}

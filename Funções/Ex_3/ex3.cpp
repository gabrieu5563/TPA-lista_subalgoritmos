#include<stdio.h>

int anos(int _dias){
	int result = _dias / 365;
	return(result);
}

int meses(int _dias){
	int result = _dias / 31;
	return(result);
}

int main(){
	int dias, rep = 1;
	
	do{
		printf("Digite quantos dias de vida voce tem: ");
		scanf("%d", &dias);
		if(dias < 0){
			printf("\nDigite uma quanditade de dias positiva.\n");
		} else {
			rep = 0;
		}
	} while(rep == 1);
	
	printf("Voce viveu %d dias, %d meses e %d anos.", dias, meses(dias), anos(dias));
}

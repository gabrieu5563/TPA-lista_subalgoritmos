#include<stdio.h>

void crescente(int _n1, int _n2, int _n3){
	int menor = _n1;
	menor = _n2 < menor? _n2: menor;
	menor = _n3 < menor? _n3: menor;
	
	if(menor == _n1){
		if(_n2 < _n3){
			printf("%d %d %d", menor, _n2, _n3);
		} else {
			printf("%d %d %d", menor, _n3, _n2);
		}
	}
	
	if(menor == _n2){
		if(_n1 < _n3){
			printf("%d %d %d", menor, _n1, _n3);
		} else {
			printf("%d %d %d", menor, _n3, _n1);
		}
	}
	
	if(menor == _n3){
		if(_n2 < _n1){
			printf("%d %d %d", menor, _n2, _n1);
		} else {
			printf("%d %d %d", menor, _n1, _n2);
		}
	}
	
}

int main(){
	int n1, n2, n3;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	crescente(n1, n2, n3);
}

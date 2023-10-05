#include<stdio.h>

void crescente(int _n1, int _n2){
	if(_n1 >= _n2){
		printf("%d %d", _n1, _n2);
	} else {
		printf("%d %d", _n2, _n1);
	}
}

int main(){
	int n1, n2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	crescente(n1, n2);
}

#include<stdio.h>

bool numero(int _n){
	
	bool _m;
	
	if(_n >= 0){
		_m = 1;
	} else {
		_m = 0;
	}
	return(_m);
}

int main(){
	int n;
	bool m;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	m = numero(n);
	if(m == 0){
		printf("O numero %d e negativo.", n);
	} else {
		printf("O numero %d e positivo.", n);
	}
}

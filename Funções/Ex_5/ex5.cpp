#include<stdio.h>

float media(float _n1, float _n2, float _n3, char _op){
	
	if(_op == 'a'){
		float media = (_n1 + _n2 + _n3) / 3;
		return(media);
	} else {
		float media = ((_n1 * 5) + (_n2 * 3) + (_n3 * 2)) / 10;
		return(media);
	}
}

int main(){
	float n1, n2, n3;
	char op;
	
	printf("\nDigite a primeira nota:");
	scanf("%f", &n1);
	printf("\nDigite a segunda nota:");
	scanf("%f", &n2);
	printf("\nDigite a terceira nota:");
	scanf("%f", &n3);
	printf("\nDigite 'A' para calcular media aritmetica e 'p para media ponderada.");
	scanf(" %c", &op);
	
	printf("A media das notas %.1f, %.1f e %.1f foi de %.2f", n1, n2, n3, media(n1, n2, n3, op));
	
}

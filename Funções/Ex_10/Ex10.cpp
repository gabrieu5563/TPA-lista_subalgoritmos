#include<stdio.h>
#include<cmath>

float deltacalc(int _a, int _b, int _c){
	
	float delta;
	delta = (_b*_b) - 4 * _a * _c;
	return delta;
}

float baskara(int _a, int _b, int _c, int _op, float _delta){
    float x;

    if(_op == 1){
        x = (-_b + sqrt(_delta)) / (2 * _a);
    } else {
        x = (-_b - sqrt(_delta)) / (2 * _a);
    }

    return x;
}

int main(){
	int a, b, c, op = 1;
	float delta, x1, x2;
	
	printf("\nDigite o valor de a: ");
	scanf("%d", &a);
	printf("\nDigite o valor de b: ");
	scanf("%d", &b);
	printf("\nDigite o valor de c: ");
	scanf("%d", &c);
	
	delta = deltacalc(a, b, c);

	if(delta < 0){
		printf("Delta negativo. Impossivel calcular raizes.");
	} else {
		if(delta == 0){
			
			x1 = baskara(a, b, c, op, delta);
			printf("A raiz de %d, %d e %d = %.2f", a, b, c, x1);
		} else {
			
			x1 = baskara(a, b, c, op, delta);
			op = 2;
			x2 = baskara(a, b, c, op, delta);
			printf("As raizes de %d, %d e %d = %.2f e %.2f", a, b, c, x1, x2);
		}
	}
}

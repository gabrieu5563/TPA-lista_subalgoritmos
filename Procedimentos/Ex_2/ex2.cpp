#include<stdio.h>

void saudacao2(int _hora){
	
	if(_hora < 12)
	{
		printf("Bom dia");
	} else {
		if(_hora < 18)
		{
			printf("Boa tarde");
		} else {
			printf("Boa noite");
		}
	}
}

int main(){
	int hora;
	
	printf("Digite a hora: ");
	scanf("%d", &hora);
	
	saudacao2(hora);
}

#include<stdio.h>

int tempo(int _anos){
	int result = _anos * 365;
	return(result);
}

int main(){
	int anos, rep = 1;
	
	do{
		printf("Digite quantos anos de vida voce tem: ");
		scanf("%d", &anos);
		if(anos < 0){
			printf("\nDigite uma quanditade de anos positiva.\n");
		} else {
			rep = 0;
		}
	} while(rep == 1);
	
	printf("Voce viveu %d dias.", tempo(anos));
}

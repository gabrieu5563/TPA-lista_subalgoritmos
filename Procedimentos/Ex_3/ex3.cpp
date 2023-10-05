#include<stdio.h>

void nome_mes(int _mes){
	if(_mes == 1){
		printf("\nJaneiro");
	} else {
		if(_mes == 2){
		printf("\nFevereiro");
		} else {
			if(_mes == 3){
				printf("\nMarco");
			} else {
				if(_mes == 4){
					printf("\nAbril");
				} else {
					if(_mes == 5){
						printf("\nMaio");
					} else {
						if(_mes == 6){
							printf("\nJunho");
						} else {
							if(_mes == 7){
								printf("\nJulho");
							} else {
								if(_mes == 8){
									printf("\nAgosto");
								} else {
									if(_mes == 9){
										printf("\nSetembro");
									} else {
										if(_mes == 10){
											printf("\nOutubro");
										} else {
											if(_mes == 11){
												printf("\nNovembro");
											} else {
												if(_mes == 12){
													printf("\nDezembro");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int main(){
	int mes, rep = 1;
	
	do{
		printf("Digite um numero equivalente a um mes: ");
		scanf("%d", &mes);
		if(mes < 1 || mes > 12)
		{
			printf("Digite um valor valido (1 - 12).\n");
		} else {
			rep = 0;
		}
	}while(rep == 1);
	
	nome_mes(mes);
}

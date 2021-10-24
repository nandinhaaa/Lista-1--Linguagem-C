#include<stdlib.h>
#include<stdio.h>
int main(){
	int a, b, c, d;
	a = b =  c = d = 0;
	printf("Digite um numero inteiro entre 1 e 7: ");
	scanf("%d",&a);
	while(a!=0){
	switch(a){
		case 1: printf("Domingo \n");
			break;
		case 2: printf("Segunda-Feira \n");
			break;
		case 3: printf("Terca-Feira \n");
			break;
		case 4: printf("Quarta-Feira \n");
			break;
		case 5: printf("Quinta-Feira \n");
			break;
		case 6: printf("Sexta-Feira \n");
			break;
		case 7: printf("Sabado \n");
			break;
		default: printf("Valor invalido!\n");
	}
	printf("\nDigite um numero inteiro entre 1 e 7: ");
	scanf("%d",&a);
	}
	printf("\n\n\tSistema finalizado!\n\n");
	return 0;
	system("PAUSE");
}
	

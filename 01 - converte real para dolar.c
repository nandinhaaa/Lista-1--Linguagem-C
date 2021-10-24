#include<stdlib.h>
#include<stdio.h>
int main(){
	float a, b, c, d;
	a = b =  c = d = 0;
	printf("Digite o valor do Dolar atual: ");
	scanf("%f",&a);
	printf("Digite o valor em REAIS que deseja converter: ");
	scanf("%f",&b);
	c = b / a;
	printf("O Valor correspondente em Dolar: US$ %.2f",c);
	printf("\n\n");
	while(b!=0){
	printf("Digite o valor em REAIS que deseja converter: ");
	scanf("%f",&b);
	c = b / a;
	printf("O Valor correspondente em Dolar: US$ %.2f",c);
	printf("\n\n");
	}
	printf("Sistema finalizado!\n\n");
	system("PAUSE");	
}

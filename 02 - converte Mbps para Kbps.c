#include<stdlib.h>
#include<stdio.h>
int main(){
	float a, b, c, d;
	a = b =  c = d = 0;
	a =1000;
	printf("Digite o quantos Mbps tem: ");
	scanf("%f",&b);
	c = a * b;
	printf("O Valor correspondente em Kbps: %.2f",c);
	printf("\n\n");
	while(b!=0){
	printf("Digite o quantos Mbps tem: ");
	scanf("%f",&b);
	c = a * b;
	printf("O Valor correspondente em Kbps: %.2f",c);
	printf("\n\n");
	}
	printf("Sistema finalizado!\n\n");
	system("PAUSE");	
}

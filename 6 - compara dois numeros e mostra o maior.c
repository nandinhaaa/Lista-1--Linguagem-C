#include<stdlib.h>
#include<stdio.h>
int main(){
	float a, b, c, d;
	
	printf("Digite um numero qualquer: ");
	scanf("%f",&a);
	
	printf("Digite um outro numero qualquer: ");
	scanf("%f",&b);
	
	if(a>b){
		printf("\nO primeiro numero digitado e o maior! %.2f \n\n",a);
	}
	else if (b>a){
		printf("\nO segundo numero digitado e o maior! %.2f \n\n",b);
	}
	else{
		printf("\nOs numeros digitados sao iguais! \n\n",b);
	}
	
	printf("\n\n\tSaindo do Sistema!\n\n");
	return 0;
	system("PAUSE");
}

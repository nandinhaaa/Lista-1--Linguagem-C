#include<stdlib.h>
#include<stdio.h>
#include<math.h> /*necessario para fazer a raiz quadrada*/
int main(){
	float a, b, c;
	a = b =  c = 0;
	printf("Digite um numero qualquer: ");
	scanf("%f",&a);
	
	while(a!=0){
		if(a>0){
			printf("\nNumero positivo!\n");
			b = a * a;
			c = sqrt(a);
			printf("O quadrado do numero %.2f e: %.2f\n",a,b);
			printf("A raiz do numero %.2f e: %.2f\n",a,c);
		}
		else{
			printf("Numero nao positivo!");
		}
		printf("\n\nDigite um numero qualquer: ");
		scanf("%f",&a);	
	}
	
	printf("Sistema finalizado!\n\n");
	system("PAUSE");	
}

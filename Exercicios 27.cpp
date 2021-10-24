/*27. Gere um número aleatório entre 0 e 19. Receba um número informado pelo usuário até que ele acerte o
número aleatório gerado. Apresente quantas tentativas foram necessárias. Para gerar um número aleatório:*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numAleatorio, num, cont=0;
	
	srand(time(NULL)); // inicializando o gerador de numeros
	numAleatorio = rand()%10;
	do{
		printf("Numero da sorte:");
		scanf("%d",&num);
		cont++;
	}while(num!=numAleatorio);
	printf("Voce acertou em %d tentativas :) \n",cont);
	return 0;
}

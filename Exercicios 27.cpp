/*27. Gere um n�mero aleat�rio entre 0 e 19. Receba um n�mero informado pelo usu�rio at� que ele acerte o
n�mero aleat�rio gerado. Apresente quantas tentativas foram necess�rias. Para gerar um n�mero aleat�rio:*/
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

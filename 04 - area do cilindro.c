#include<stdlib.h>
#include<stdio.h>
int main(){
	float a, b, c, d, e, f;
	a = b = c = d = e = f = 0;
	printf("Digite a Altura do Cilindro: ");
	scanf("%f",&a);
	printf("\n");
	printf("Digite o Diametro do Cilindro: ");
	scanf("%f",&b);
	
	c = b / 2;
	d = 3.14159265359;
	e = c + a;
	f = 2 * d * c * e;
/*   Caso queira saber o passo a passo	
	printf("\n Altura: %.2f",a);
	printf("\n Diametro: %.2f",b);
	printf("\n Raio: %.2f",c);
	printf("\n PI: %.2f",d);
	printf("\n Altura + Raio: %.2f",e);
*/	
	printf("Area do Cilindro: %.2f",f);
	
	return 0;
	system("PAUSE");	
}

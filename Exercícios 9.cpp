/*9. Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, utilizando-se um automóvel
que faz N Km por litro. Para obter o cálculo, o usuário deverá fornecer o tempo gasto e a velocidade média
da viagem. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA ? TEMPO *
VELOCIDADE. Tendo o valor da distancia, basta calcular a quantidade de litros de combustível utilizada na
viagem com a fórmula: LITROS_USADOS ? DISTANCIA /N. O programa em C deverá apresentar os valores da
distância percorrida e a quantidade de litros utilizados na viagem.*/
#include <stdio.h>

int main(){
	float km_litro, tempo, vel, dist, litros;
	while(1){
		printf("Entre com tempo(horas) da viagem e a velocidade media (km/h):");
		scanf("%f%f",&tempo,&vel);
		dist= tempo*vel;
		printf("Km por litro do automovel:");
		scanf("%f",&km_litro);
		litros = dist/km_litro;
		printf("Quantidade de litros utilizados: %.2f\n",litros);
	}// fim while
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float tempo,velocidade, litros, distancia;
	printf("Tempo gasto na viagem:");
	scanf("%f",&tempo);
	printf("\nVelocidade média:");
	scanf("%f",&velocidade);
	printf("\nSeu veículo faz quantos Km/L?");
	scanf("%f",&litros);
	distancia = velocidade * tempo;
	printf("\n\nDistância percorrida: %.2f",distancia);
	printf("\nLitros utilizados na viagem: %.2f",distancia/litros);	
	
	return 0;
}

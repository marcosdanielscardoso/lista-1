#include<stdio.h>

int main(){
	double a,b,resultado;
	printf("Digite quantos reais voce quer converter em dolar?:  ");
	scanf("%lf",&a);
	printf("Qual a cotacao do dolar atualmente?  ");
	scanf("%lf",&b);
	resultado = a*b;
	printf("A convercao de real para dolar da %lf dolares\n",resultado);
	
}

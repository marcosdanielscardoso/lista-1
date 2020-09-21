#include<stdio.h>

int main(){
	int a,b=1000,resultado;
	printf("Digite um valor mbps para comversao em kbps: ");
	scanf("%d",&a);
	resultado=a*b;
	printf("A conversao da %d kbps\n",resultado);
}

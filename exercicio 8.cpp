#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float custf;
	
	printf("Digite o custo de f�brica:\n");
	scanf("%f",&custf);
	
	custf = custf + (custf*0.25) + (custf * 0.42);
	
	printf("Custo ao consumidor � de  %.2f\n",custf);
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int v,i,j;
	
	printf("Digite o n�mero de bolas verdes:");
	scanf("%d",&v);
	v=v*10;
	
	printf("Digite o n�mero de bolas amarelas:");
	scanf("%d",&i);
	i=i*5;
	
	printf("Digite o numero de bolas brancas:");
	scanf("%d",&j);
	j=j*3;
	
	printf("Sua pontua��o final foi de %d.",(v+i+j));


	return 0;
}


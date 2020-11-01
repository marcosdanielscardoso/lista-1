#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float i;
	
	printf("Digite um número:");
	scanf("%f",&i);
	
	if(n>=0){
		printf("\n%.3f² é %.3f.",i,(i*i));
		printf("\nA raiz quadrada de %.3f é %.3f.",i,sqrt(i));
	}else{
		printf("\n%.3f é um número menor que 0.",i);
	}
	
	
	return 0;
}

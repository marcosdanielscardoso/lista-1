#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float i;
	
	printf("Digite um n�mero:");
	scanf("%f",&i);
	
	if(n>=0){
		printf("\n%.3f� � %.3f.",i,(i*i));
		printf("\nA raiz quadrada de %.3f � %.3f.",i,sqrt(i));
	}else{
		printf("\n%.3f � um n�mero menor que 0.",i);
	}
	
	
	return 0;
}

#include<stdio.h>

int main(){
	int a,b,maior,menor;
	
     printf("Digite o primeiro numero: ");
     scanf("%d", & a);
     
     printf("Digite o segundo numero: ");
     scanf("%d", & b);
     
     maior = a;
     menor = a;
     if (b < menor)
        menor = b;
     if (b > maior)
        maior = b;

     printf ("\n O maior numero e o: %d", maior);
}


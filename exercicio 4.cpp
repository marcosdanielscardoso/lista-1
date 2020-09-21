#include<stdio.h>

int main(){
    int raio,altura,A,V;
    printf("qual a raio:");
    scanf("%d",&raio);
    printf("qual a altura:");
    scanf("%d",&altura);
    A=2*3.14*(raio+altura);
    V=3.14*(raio*raio)*altura;
    printf("a area e:%d. ",A,V);
}

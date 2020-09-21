#include <stdio.h>

int main(){
    int Idade=0;
    printf("Digite idade:");
    scanf("%d",&Idade);
    if(Idade>18 && Idade<=65){
        printf("Eleitor obrigatorio\n");
    }
    else if(Idade>=16 && Idade<=18 || Idade>65){
        printf("Eleitor facultativo\n");
    }
    else
    {
        printf("Nao eleitor\n");
    }
    system("pause");
    return 0;
}

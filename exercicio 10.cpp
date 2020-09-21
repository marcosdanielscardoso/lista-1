#include <stdio.h>

int main(void)
{
    float num1,num2;
    char oper;
        do
        {           
            printf("\nDigite a expressao na forma: numero1 operador numero2\n");
            printf("Exemplos: 1 + 1 ,  2.1 * 3.1\n\n");

            scanf("%f", &num1);
            scanf(" %c",&oper);
            scanf("%f", &num2);

            printf("\nCalculando: %.2f %c %.2f = ", num1,oper,num2);

            switch( oper )
            {
                case '+':
                        printf("%.2f\n\n", num1 + num2);
                        break;

                case '-':
                        printf("%.2f\n\n", num1 - num2);
                        break;

                case '*':
                        printf("%.2f\n\n", num1 * num2);
                        break;

                case '/':
                        if(num2 != 0)
                            printf("%.2f\n\n", num1 / num2);
                        else
                            printf("Nao existe divisao por 0\n\n");
                        break;

                default:
                        if(num1 != 0 && oper != '0' && num2 != 0)
                            printf(" Operador invalido\n\n ");
                        else
                            printf(" Fechando calculadora!\n ");
            }

        }while(num1 != 0 && oper != '0' && num2 != 0);

}

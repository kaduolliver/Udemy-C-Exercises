#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;

    printf("\n---Programa que verifica se 3 n�meros s�o maiores que 10 ou n�o---\n\n");
    printf("Inserte 3 n�meros inteiros:\n");
    if (scanf("%d%d%d", &num1, &num2, &num3) !=3)
    {
        printf("Entrada inv�lida. Digite 3 n�meros inteiros!");
        return 1;

    }else if (num1 > 10 || num2 > 10 || num3 > 10)
    {
        if (num1 > 10)
        {
            printf("O primeiro n�mero � maior que 10!\n");
        }else{
            printf("O primeiro n�mero n�o � maior que 10!\n");
        }
        if (num2 > 10)
        {
            printf("O segundo n�mero � maior que 10!\n");
        }else{
            printf("O segundo n�mero n�o � maior que 10!\n");
        }
        if (num3 > 10)
        {
            printf("O terceiro n�mero � maior que 10!\n");
        }else{
            printf("O terceiro n�mero n�o � maior que 10!\n");
        }
    }else{
        printf("Nenhum dos 3 n�meros � maior que 10!\n");
    }


    return 0;
    
}
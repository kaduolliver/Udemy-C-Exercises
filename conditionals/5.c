#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;

    printf("\n---Programa que verifica se 3 números são maiores que 10 ou não---\n\n");
    printf("Inserte 3 números inteiros:\n");
    if (scanf("%d%d%d", &num1, &num2, &num3) !=3)
    {
        printf("Entrada inválida. Digite 3 números inteiros!");
        return 1;

    }else if (num1 > 10 || num2 > 10 || num3 > 10)
    {
        if (num1 > 10)
        {
            printf("O primeiro número é maior que 10!\n");
        }else{
            printf("O primeiro número não é maior que 10!\n");
        }
        if (num2 > 10)
        {
            printf("O segundo número é maior que 10!\n");
        }else{
            printf("O segundo número não é maior que 10!\n");
        }
        if (num3 > 10)
        {
            printf("O terceiro número é maior que 10!\n");
        }else{
            printf("O terceiro número não é maior que 10!\n");
        }
    }else{
        printf("Nenhum dos 3 números é maior que 10!\n");
    }


    return 0;
    
}
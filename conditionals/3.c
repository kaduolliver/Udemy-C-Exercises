#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\n---Programa para verificar se � par ou n�o---\n\n");
    printf("Digite um n�mero inteiro:\n");
    if (scanf("%d", &num) != 1)
    {
        printf("Entrada inv�lida. Digite um n�mero inteiro!");
        return 1;
        
    }else if (num % 2 == 0 && num > 0)
    {
        printf("Esse n�mero � par!");
    }else if (num < 0)
    {
        printf("Esse n�mero � negativo!");
    }else{
        printf("Esse n�mero n�o � par!");
    }

    
    return 0;

}
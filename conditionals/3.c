#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\n---Programa para verificar se é par ou não---\n\n");
    printf("Digite um número inteiro:\n");
    if (scanf("%d", &num) != 1)
    {
        printf("Entrada inválida. Digite um número inteiro!");
        return 1;
        
    }else if (num % 2 == 0 && num > 0)
    {
        printf("Esse número é par!");
    }else if (num < 0)
    {
        printf("Esse número é negativo!");
    }else{
        printf("Esse número não é par!");
    }

    
    return 0;

}
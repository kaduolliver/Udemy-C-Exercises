#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a, b;

    printf("\n--Condicionais Simples--\n\n");   
    printf("Inserte 2 números inteiros:\n");
    
    if (scanf("%d%d", &a, &b) != 2)
    {
        printf("Entrada inválida. Digite 2 números inteiros!");
    }

    if (a > b)
    {
        printf("%d é maior que %d", a, b);
    }else if (a == b)
    {
        printf("%d é igual a %d", a, b);
    }else{
        printf("%d é menor que %d", a, b);
    }

    
    
    return 0;
    
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a, b, resultado;

    printf("\n--Condicionais Simples--\n\n");

    printf("Inserte 2 números inteiros:\n");
    if (scanf("%d%d", &a, &b) != 2)
    {
        printf("Entrada inválida. Digite 2 números inteiros!\n");
        return 1;
    }

    resultado = a + b;

    if (resultado >= 10)
    {
        printf("%d é maior/igual a 10!\n", resultado);
    }else{
        printf("%d é menor que 10!", resultado);
    }

    return 0;
    
    
    
}
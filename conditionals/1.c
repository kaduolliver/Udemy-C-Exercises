#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a, b, resultado;

    printf("\n--Condicionais Simples--\n\n");

    printf("Inserte 2 n�meros inteiros:\n");
    if (scanf("%d%d", &a, &b) != 2)
    {
        printf("Entrada inv�lida. Digite 2 n�meros inteiros!\n");
        return 1;
    }

    resultado = a + b;

    if (resultado >= 10)
    {
        printf("%d � maior/igual a 10!\n", resultado);
    }else{
        printf("%d � menor que 10!", resultado);
    }

    return 0;
    
    
    
}
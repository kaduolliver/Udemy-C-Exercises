#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a, b;

    printf("\n--Condicionais Simples--\n\n");   
    printf("Inserte 2 n�meros inteiros:\n");
    
    if (scanf("%d%d", &a, &b) != 2)
    {
        printf("Entrada inv�lida. Digite 2 n�meros inteiros!");
    }

    if (a > b)
    {
        printf("%d � maior que %d", a, b);
    }else if (a == b)
    {
        printf("%d � igual a %d", a, b);
    }else{
        printf("%d � menor que %d", a, b);
    }

    
    
    return 0;
    
}
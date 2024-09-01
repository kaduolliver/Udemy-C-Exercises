#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, resultado;

    printf("\nSequência de Quadrados\n");

    printf("Digite um numero para saber seu quadrado:\n");
    
    if (scanf("%d", &num) != 1 )
    {
        printf("Entrada inválida. Digite um número inteiro não-negativo!");
        return 1;
    }
    
    if (num < 1)
    {
        printf("Digite um número não-negativo!");
        return 1;
    }

    while (num != 0)
    {
        resultado = num * num;
        printf("O resultado de %d é: %d\n", num, resultado);
        scanf("%d", &num);
        
    }

    return 0;
    
    
}

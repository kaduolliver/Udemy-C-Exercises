#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, cont, soma;

    printf("\nSoma dos primeiros n números inteiros positivos\n");
    printf("Digite um numero para somar sua sequência:\n");

    if (scanf("%d", &num) != 1)
    {
        printf("Entrada inválida. Por favor, digite um número inteiro positivo!");
        return 1;
    }

    soma = 0;
    cont = 1;
    
    if (num <= 0)
    {
        printf("Digite apenas números inteiros positivos!\n");
        return 1;
    }
    
    while (cont <= num)
    {
        soma = soma + cont;
        cont = cont + 1;
    }

    printf("A soma dos %d primeiros inteiros positivos é: %d\n", num, soma);
    

    return 0;

}
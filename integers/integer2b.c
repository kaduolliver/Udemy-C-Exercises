#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, soma;

    printf("\nSoma dos n números inteiros positivos\n");
    printf("Digite um número inteiro não-negativo para somar sua sequência:\n");

    if (scanf("%d", &num) != 1)
    {
        printf("Entrada inválida. Digite um número inteiro não-negativo!");
        return 1;
    }

    if (num <= 0)
    {
        printf("Digite um número inteiro não-negativo");
        return 1;
    }
    
    soma = 0;
    
    for (int i = 0; i <=num; i++)
    {
        soma += i;
    }

    printf("A soma dos %d números é: %d\n", num, soma);
    
    return 0;

}
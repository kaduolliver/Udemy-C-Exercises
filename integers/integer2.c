#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, cont, soma;

    printf("\nSoma dos primeiros n n�meros inteiros positivos\n");
    printf("Digite um numero para somar sua sequ�ncia:\n");

    if (scanf("%d", &num) != 1)
    {
        printf("Entrada inv�lida. Por favor, digite um n�mero inteiro positivo!");
        return 1;
    }

    soma = 0;
    cont = 1;
    
    if (num <= 0)
    {
        printf("Digite apenas n�meros inteiros positivos!\n");
        return 1;
    }
    
    while (cont <= num)
    {
        soma = soma + cont;
        cont = cont + 1;
    }

    printf("A soma dos %d primeiros inteiros positivos �: %d\n", num, soma);
    

    return 0;

}
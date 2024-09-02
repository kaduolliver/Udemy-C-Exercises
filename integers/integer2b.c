#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, soma;

    printf("\nSoma dos n n�meros inteiros positivos\n");
    printf("Digite um n�mero inteiro n�o-negativo para somar sua sequ�ncia:\n");

    if (scanf("%d", &num) != 1)
    {
        printf("Entrada inv�lida. Digite um n�mero inteiro n�o-negativo!");
        return 1;
    }

    if (num <= 0)
    {
        printf("Digite um n�mero inteiro n�o-negativo");
        return 1;
    }
    
    soma = 0;
    
    for (int i = 0; i <=num; i++)
    {
        soma += i;
    }

    printf("A soma dos %d n�meros �: %d\n", num, soma);
    
    return 0;

}
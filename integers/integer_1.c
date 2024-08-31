#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número inteiro não-negativo para saber sua raiz quadrada:\n");

    if (scanf("%d", &num) != 1)
    {
        printf("Entrada inválida. Digite um número inteiro não-negativo");
        return 1;
    }
    if(num < 1)
    {
        printf("Digite um número não-negativo!");
        return 1;
    }

    double resultado = sqrt(num);

    printf("A raiz quadrada de %d é: %.lf\n", num, resultado);


    return 0;
}
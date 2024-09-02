#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float num1, num2, resultado;

    do{

    printf("\n-----CALCULADORA-----\n\n");

    printf("[Menu interativo]\n\n");
    printf("Digite um número de 0 a 4 para selecionar a opção correspondente:\n");
    printf("1.Soma\n");
    printf("2.Subtração\n");
    printf("3.Multiplicação\n");
    printf("4.Divisão\n");
    printf("0.Sair\n");

    if (scanf("%d", &opcao) != 1)
    {
        printf("Entrada inválida. Digite um número inteiro não-negativo!");
        fflush(stdin);
        continue;
    }
    if (opcao < 0 || opcao > 4)
    {
        printf("Digite um número de 1 a 4, apenas!");
    }
    if (opcao != 0)
    {
        printf("Digite 2 números:\n");
        if (scanf("%f%f", &num1, &num2) != 2)
        {
            printf("Entrada inválida. Digite 2 números.\n");
            fflush(stdin);
            continue;
        }
    }

    switch (opcao)
    {
    case 1:
        resultado = num1 + num2;
        printf("O resultado da soma é: %.2f", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("O resultado da subtração é: %.2f", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("O resultado da multiplicação é: %.2f", resultado);
        break;
    case 4:
    if (num2 == 0)
    {
        printf("Operação inválida. Não pode dividir por 0");
    }else{
        resultado = num1 / num2;
        printf("O resultado da divisão é: %.2f", resultado);
    }
    break;
    }

    }while(opcao != 0);

    return 0;

}
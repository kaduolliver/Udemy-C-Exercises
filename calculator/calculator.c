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
    printf("Digite um n�mero de 0 a 4 para selecionar a op��o correspondente:\n");
    printf("1.Soma\n");
    printf("2.Subtra��o\n");
    printf("3.Multiplica��o\n");
    printf("4.Divis�o\n");
    printf("0.Sair\n");

    if (scanf("%d", &opcao) != 1)
    {
        printf("Entrada inv�lida. Digite um n�mero inteiro n�o-negativo!");
        fflush(stdin);
        continue;
    }
    if (opcao < 0 || opcao > 4)
    {
        printf("Digite um n�mero de 1 a 4, apenas!");
    }
    if (opcao != 0)
    {
        printf("Digite 2 n�meros:\n");
        if (scanf("%f%f", &num1, &num2) != 2)
        {
            printf("Entrada inv�lida. Digite 2 n�meros.\n");
            fflush(stdin);
            continue;
        }
    }

    switch (opcao)
    {
    case 1:
        resultado = num1 + num2;
        printf("O resultado da soma �: %.2f", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("O resultado da subtra��o �: %.2f", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("O resultado da multiplica��o �: %.2f", resultado);
        break;
    case 4:
    if (num2 == 0)
    {
        printf("Opera��o inv�lida. N�o pode dividir por 0");
    }else{
        resultado = num1 / num2;
        printf("O resultado da divis�o �: %.2f", resultado);
    }
    break;
    }

    }while(opcao != 0);

    return 0;

}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    //Variáveis
    int a, b, c, resultado;

    //Início do programa
    printf("\n---Multiplicação de 3 valores na mesma linha de comando---\n\n");

    //Comando do programa
    printf("Inserte 3 valores para multiplicá-los:\n");

    //Verifica se o usuário vai inserir os 3 números corretamente
    if (scanf("%d%d%d", &a, &b, &c) != 3)
    {
        printf("Entrada inválida. Digite 3 números inteiros!");
        return 1;
    }

    //Calculo das 3 notas
    resultado = a * b * c;

    //Impressão do resultado
    printf("O resultado da multiplicação de %d, %d e %d é %d", a, b, c, resultado);

    
    return 0;
    
}
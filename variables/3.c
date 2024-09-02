#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    //Variáveis
    int a, b;

    //Início do programa
    printf("\n---Calculo da diferença de dois valores inteiros com resultado absoluto---\n\n");

    //Comando do programa
    printf("Digite dois valores para saber sua diferença:\n");

    //Verifica se o usuário vai inserir os 2 números corretamente
    if (scanf("%d%d", &a, &b) != 2)
    {
        printf("Entrada inválida. Digite 2 números inteiros!");
        return 1;
    }

    //Coloca a subtração das variáveis em uma outra variável e transforma ela em um resultado absoluto
    int resultado = a - b;
    int abnum = abs(resultado);

    //Imprime o resultado
    printf("O resultado absoluto de %d menos %d é %d\n", a, b, abnum);


    return 0;
    
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    //Vari�veis
    int a, b, c, resultado;

    //In�cio do programa
    printf("\n---Multiplica��o de 3 valores na mesma linha de comando---\n\n");

    //Comando do programa
    printf("Inserte 3 valores para multiplic�-los:\n");

    //Verifica se o usu�rio vai inserir os 3 n�meros corretamente
    if (scanf("%d%d%d", &a, &b, &c) != 3)
    {
        printf("Entrada inv�lida. Digite 3 n�meros inteiros!");
        return 1;
    }

    //Calculo das 3 notas
    resultado = a * b * c;

    //Impress�o do resultado
    printf("O resultado da multiplica��o de %d, %d e %d � %d", a, b, c, resultado);

    
    return 0;
    
}
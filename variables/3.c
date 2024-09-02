#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    //Vari�veis
    int a, b;

    //In�cio do programa
    printf("\n---Calculo da diferen�a de dois valores inteiros com resultado absoluto---\n\n");

    //Comando do programa
    printf("Digite dois valores para saber sua diferen�a:\n");

    //Verifica se o usu�rio vai inserir os 2 n�meros corretamente
    if (scanf("%d%d", &a, &b) != 2)
    {
        printf("Entrada inv�lida. Digite 2 n�meros inteiros!");
        return 1;
    }

    //Coloca a subtra��o das vari�veis em uma outra vari�vel e transforma ela em um resultado absoluto
    int resultado = a - b;
    int abnum = abs(resultado);

    //Imprime o resultado
    printf("O resultado absoluto de %d menos %d � %d\n", a, b, abnum);


    return 0;
    
}
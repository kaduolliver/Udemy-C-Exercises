#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    //Adapta��o do c�digo para a l�ngua portuguesa
    setlocale(LC_ALL, "Portuguese");

    //Vari�veis
    int a = 59;
    int b = 10;

    float c = 33.3;
    float d = 56.3;

    char letra1 = 'E';
    char letra2 = 'U';
    char resultado[2];
    //char alteracao[2];


    //Impress�o de n�meros inteiros
    printf("O valor de a = %d + b = %d �: %d\n", a, b, a+b);
    
    //Altera��o de valores atrav�s do scanf
    printf("Digite 2 valores para alterar o valor das vari�veis:\n");
    scanf("%d%d", &a, &b);
    printf("O valor das vari�veis agora � %d e %d, somando-as � %d\n\n", a, b, a+b);


    //Impress�o de n�meros quebrados
    printf("O valor de c = %.2f + d = %.2f �: %.2f\n", c, d, c+d);
    
    
    //Op��o 1 - Altera��o dos valores quebrados com verifica��o de poss�vel erro
    // printf("Digite 2 valores para alterar o valor das vari�veis quebradas:\n");
    // if (scanf("%f%f", &c, &d) != 2)
    // {
    //     printf("Entrada inv�lida. Digite 2 n�meros flutuantes!");
    //     return 1;
    // }

    //Op��o 2 - Altera��o dos valores quebrados com verifica��o de poss�vel erro de digita��o e limpeza do buffer de entrada
    printf("Digite 2 valores para alterar o valor das vari�veis quebradas:\n");
    while (scanf("%f%f", &c, &d) !=2)
    {
        printf("Entrada inv�lida. Digite 2 n�meros flutuantes!");
        //Limpa o buffer de entrada
        while (getchar() != '\n');
        
    }

    //Impress�o dos novos valores
    printf("O valor das vari�veis quebradas agora � %.2f e %.2f, somando-as � %.2f\n\n", c, d, c+d);



    //Concatena��o de strings utilizando as fun��es strcpy e strcat
    char letras[2] =  {letra1, letra2};
    strcpy(resultado, "");
    strcat(resultado, letras);

    //Impress�o dos valores e resultado
    printf("Letra1 � '%c' e Letra2 � '%c' , juntando-as forma %s\n", letra1, letra2, resultado);


    //Altera��o de dados - DESCONTINUADO - [INICIO]

    // char novasletras[2] = {letra1, letra2};
    // strcpy(alteracao, "");
    // strcat(alteracao, novasletras);
    // printf("Digite 2 letras para modific�-las:\n");

    // int i;
    // while((i = getchar() != '\n' && i != EOF));

    // scanf(" %c %c", &letra1, &letra2);
    
    // letra1 = novasletras[0];
    // letra2 = novasletras[1];

    // printf("Letra1 agora � '%c' e Letra2 agora � '%c', juntando-as forma %s\n", letra1, letra2, resultado);
   
    // [FIM]


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    //Adaptação do código para a língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    //Variáveis
    int a = 59;
    int b = 10;

    float c = 33.3;
    float d = 56.3;

    char letra1 = 'E';
    char letra2 = 'U';
    char resultado[2];
    //char alteracao[2];


    //Impressão de números inteiros
    printf("O valor de a = %d + b = %d é: %d\n", a, b, a+b);
    
    //Alteração de valores através do scanf
    printf("Digite 2 valores para alterar o valor das variáveis:\n");
    scanf("%d%d", &a, &b);
    printf("O valor das variáveis agora é %d e %d, somando-as é %d\n\n", a, b, a+b);


    //Impressão de números quebrados
    printf("O valor de c = %.2f + d = %.2f é: %.2f\n", c, d, c+d);
    
    
    //Opção 1 - Alteração dos valores quebrados com verificação de possível erro
    // printf("Digite 2 valores para alterar o valor das variáveis quebradas:\n");
    // if (scanf("%f%f", &c, &d) != 2)
    // {
    //     printf("Entrada inválida. Digite 2 números flutuantes!");
    //     return 1;
    // }

    //Opção 2 - Alteração dos valores quebrados com verificação de possível erro de digitação e limpeza do buffer de entrada
    printf("Digite 2 valores para alterar o valor das variáveis quebradas:\n");
    while (scanf("%f%f", &c, &d) !=2)
    {
        printf("Entrada inválida. Digite 2 números flutuantes!");
        //Limpa o buffer de entrada
        while (getchar() != '\n');
        
    }

    //Impressão dos novos valores
    printf("O valor das variáveis quebradas agora é %.2f e %.2f, somando-as é %.2f\n\n", c, d, c+d);



    //Concatenação de strings utilizando as funções strcpy e strcat
    char letras[2] =  {letra1, letra2};
    strcpy(resultado, "");
    strcat(resultado, letras);

    //Impressão dos valores e resultado
    printf("Letra1 é '%c' e Letra2 é '%c' , juntando-as forma %s\n", letra1, letra2, resultado);


    //Alteração de dados - DESCONTINUADO - [INICIO]

    // char novasletras[2] = {letra1, letra2};
    // strcpy(alteracao, "");
    // strcat(alteracao, novasletras);
    // printf("Digite 2 letras para modificá-las:\n");

    // int i;
    // while((i = getchar() != '\n' && i != EOF));

    // scanf(" %c %c", &letra1, &letra2);
    
    // letra1 = novasletras[0];
    // letra2 = novasletras[1];

    // printf("Letra1 agora é '%c' e Letra2 agora é '%c', juntando-as forma %s\n", letra1, letra2, resultado);
   
    // [FIM]


    return 0;
}
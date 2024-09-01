#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, square;

    printf("\n\tCalculo do quadrado de uma sequência de números\n");
    printf("\nDigite um número inteiro não-negativo seguido por 0:\n");
    scanf("%d", &num);

    while (num != 0)
    {
        square = num * num;
        printf("O quadrado de %d é %d\n", num, square);
        scanf("%d", &num);
    }


    return 0;
    
}

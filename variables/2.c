#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float a, b, media;

    printf("\n---Bem-vindo ao calculador de média---\n\n");
    printf("Digite 2 notas para saber a média:\n");

    if (scanf("%f%f", &a, &b) != 2)
    {
        printf("Entrada inválida. Digite dois números!");
        return 1;
    }
    
    media = (a + b)/2;

    printf("A média de %.2f e %.2f é %.2f", a, b, media);
    

    return 0;


}
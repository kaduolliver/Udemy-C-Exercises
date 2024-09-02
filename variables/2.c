#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float a, b, media;

    printf("\n---Bem-vindo ao calculador de m�dia---\n\n");
    printf("Digite 2 notas para saber a m�dia:\n");

    if (scanf("%f%f", &a, &b) != 2)
    {
        printf("Entrada inv�lida. Digite dois n�meros!");
        return 1;
    }
    
    media = (a + b)/2;

    printf("A m�dia de %.2f e %.2f � %.2f", a, b, media);
    

    return 0;


}
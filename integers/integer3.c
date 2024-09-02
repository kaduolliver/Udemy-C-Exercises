#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, cont, impar;

    printf("\nPrograma para imprimir os n primeiros n�meros naturais �mpares\n");
    printf("Digite um n�mero inteiro n�o-negativo:\n");
    
    if (scanf("%d", &num) != 1)
    {
        printf("Entrada inv�lida. Digite um n�mero inteiro n�o-negativo!");
        return 1;
    }
    cont = 0;
    impar = 1;

    if (num <= 0)
    {
        printf("Entrada inv�lida. Digite um n�mero inteiro n�o-negativo maior que 0 !");
        return 1;
    }
    
    printf("Os %d primeiros n�meros �mpares s�o:\n", num);
    while (cont < num)
    {
        printf("%d\n", impar);
        impar = impar + 2;
        cont = cont + 1;
    }
    
    return 0;
    
}
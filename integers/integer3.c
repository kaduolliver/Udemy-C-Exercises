#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, cont, impar;

    printf("\nPrograma para imprimir os n primeiros números naturais ímpares\n");
    printf("Digite um número inteiro não-negativo:\n");
    
    if (scanf("%d", &num) != 1)
    {
        printf("Entrada inválida. Digite um número inteiro não-negativo!");
        return 1;
    }
    cont = 0;
    impar = 1;

    if (num <= 0)
    {
        printf("Entrada inválida. Digite um número inteiro não-negativo maior que 0 !");
        return 1;
    }
    
    printf("Os %d primeiros números ímpares são:\n", num);
    while (cont < num)
    {
        printf("%d\n", impar);
        impar = impar + 2;
        cont = cont + 1;
    }
    
    return 0;
    
}
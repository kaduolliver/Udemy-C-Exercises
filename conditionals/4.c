#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\n---Condicionais---\n\n");
    printf("Digite um n�mero inteiro para saber se ele est� entre 0 e 10:\n");
    if (scanf("%d", &num) !=1)
    {
        printf("Entrada inv�lida. Digite um n�mero inteiro!");
        return 1;
        
    }else if (num > 0 && num < 10)
    {
        printf("Esse n�mero est� entre 0 e 10!");
    }else{
        printf("Esse n�mero n�o est� entre 0 e 10!");
    }
    
    
    return 0;

}
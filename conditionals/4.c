#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\n---Condicionais---\n\n");
    printf("Digite um número inteiro para saber se ele está entre 0 e 10:\n");
    if (scanf("%d", &num) !=1)
    {
        printf("Entrada inválida. Digite um número inteiro!");
        return 1;
        
    }else if (num > 0 && num < 10)
    {
        printf("Esse número está entre 0 e 10!");
    }else{
        printf("Esse número não está entre 0 e 10!");
    }
    
    
    return 0;

}
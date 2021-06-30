3) Faça um programa que leia três valores inteiros e mostre sua soma.

#include <stdio.h>

int main()
{
    short int numero1, numero2, numero3, soma;
    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    soma = numero1 + numero2+ numero3;
    printf("Valor da soma dos valores %d", soma);
    
    return 0;
}

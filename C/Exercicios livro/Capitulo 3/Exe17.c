17) Escreva um programa que leia um número inteiro e mostre o seu complemento
bit a bit.

#include <stdio.h>

int main()
{
    short int numero; 
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    
    printf("Complemento bit a bit de %d = %d\n", numero,  ~numero); 

    return 0;
}


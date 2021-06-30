16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a
divisão desse número por dois (utilize os operadores de deslocamento de bits).

#include <stdio.h>

int main()
{
    short int numero, numero_dividido, numero_multiplicado; 
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    
    numero_dividido = numero >> 1;
    numero_multiplicado = numero << 1; 
    
    printf("%d dividido por 2 = %d\n", numero, numero_dividido);
    printf("%d multiplicado por 2 = %d\n", numero, numero_multiplicado);

    return 0;
}

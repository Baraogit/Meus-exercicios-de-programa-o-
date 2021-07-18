12) Escreva um programa que leia um número inteiro e calcule a soma de todos os
divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores
do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.

#include <stdio.h>

int main()
{
    short int i, numero, somaDivisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 1; i < numero; i++){
        if (numero % i == 0){
            somaDivisores += i;
        }
    }
    printf("%d", somaDivisores);

    return 0;
}
-------------------------------------------------
USANDO BREAK;

#include <stdio.h>

int main()
{
    short int i, numero, somaDivisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++){
        if (i == numero)
           break;
        if (numero % i == 0)
            somaDivisores += i;
    }
    printf("%d", somaDivisores);

    return 0;
}

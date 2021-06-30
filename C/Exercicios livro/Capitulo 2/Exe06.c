6) Faça um programa que leia um valor do tipo double e depois o imprima na forma
de notação científica.

#include <stdio.h>
#include <stdlib.h>


int main()
{
    double numero;
    printf("Digite um valor em ponto flutuante e imprima o valor em notacao cientifica: ");
    scanf("%lf", &numero);
    printf("Valor : %e", numero);

    return 0;
}

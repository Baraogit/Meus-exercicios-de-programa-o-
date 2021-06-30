9) Faça um programa que leia dois valores do tipo float. Use um único comando de
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles
foram lidos.

#include <stdio.h>
#include <stdlib.h>


int main()
{
    float num1, num2;
    printf("Digite dois valores do tipo float, na mesma linha e os imprima em ordem inversa: ");
    scanf("%f %f", &num1,&num2);
    printf("Valores em ordem invertidas de leitura : %.2f   %.2f", num2, num1);

    return 0;
}

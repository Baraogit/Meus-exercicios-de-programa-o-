11) Elabore um programa que contenha uma constante qualquer do tipo float. Use o
comando #define. Imprima essa constante.

#include <stdio.h>
#include <stdlib.h>
#define constante 5.456

int main()
{
    printf("Valor da constante se utilizando #define eh : %.3f", constante);

    return 0;
}

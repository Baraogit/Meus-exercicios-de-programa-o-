10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).


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

13) Faça um programa que exiba a soma de todos os números naturais abaixo de
1.000 que são múltiplos de 3 ou 5.

#include <stdio.h>

int main()
{
    int i, somaMultiplos = 0;

    for (i = 1; i <= 1000; i++){
        if (i % 5 == 0 && i % 3 == 0)
            somaMultiplos += i;
    }
    printf("Resultado da soma dos multiplos de 3 e  5 = %d", somaMultiplos);

    return 0;
}
-----------------------------------------------
#include <stdio.h>

int main()
{
    int i = 1, somaMultiplos = 0;

    while (i <= 1000){
        if (i % 3 == 0 && i % 5 == 0)
            somaMultiplos += i;
        i++;
    }
    printf("Resultado da soma dos multiplos de 3 e  5 = %d", somaMultiplos);

    return 0;
}

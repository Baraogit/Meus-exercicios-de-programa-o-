#include <stdio.h>

int main(){
    int i, number, numberAux;

    printf("Digite um valor entre 100 e 999: ");
    scanf("%d",&number);
    numberAux = number;

    for (i = 0; number >= i; number--){
        if (number == (numberAux / 100 * 100))
            printf("Algarismo na casa da centena: %d\n", numberAux / 100 );
        if (number == (numberAux % 100 / 10 * 10))
            printf("Algarismo na casa da dezena: %d\n", numberAux % 100 / 10);
        if (number == (numberAux % 10))
            printf("Algarismo na casa da unidade: %d\n", number);
    }
    return 0;
}

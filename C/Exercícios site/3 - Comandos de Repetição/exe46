#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <stdio.h>
#include<time.h>//necessário p/ função time()

int main(){
    int i, recebeNumeroAleatorio = 0, numeroDigitado = 0;

    srand(time(NULL));

    for (i = 1; i <= 1; i++){
        recebeNumeroAleatorio = rand() % 1000;
    }
    while (numeroDigitado != recebeNumeroAleatorio){
        printf("Digite um numero (1 - 1000) e descubra o numero secreto: ");
        scanf("%d", &numeroDigitado);
        if (numeroDigitado > recebeNumeroAleatorio)
            printf("Mais abaixo\n", numeroDigitado);
        else
            if (numeroDigitado < recebeNumeroAleatorio)
                printf("Mais acima\n", numeroDigitado);
            else
                if (numeroDigitado == recebeNumeroAleatorio)
                    printf("Voce encontrou\n");
    }
    return 0;
}

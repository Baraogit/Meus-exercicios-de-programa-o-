1) Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na
tela os valores lidos.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int vetor[5];

    for (i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 5; i++){
        printf("Posicao vetor [%d]= %d\n", i, vetor[i]);
    }

    return 0;
}


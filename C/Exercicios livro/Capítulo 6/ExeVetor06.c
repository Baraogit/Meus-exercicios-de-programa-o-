6) Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
quantos valores pares foram armazenados nesse vetor.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,  x, y;
    int vet[10];

    for (i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
        if (vet[i] % 2 == 0)
            printf("Par = %d\n", vet[i]);
    }
    return 0;
}

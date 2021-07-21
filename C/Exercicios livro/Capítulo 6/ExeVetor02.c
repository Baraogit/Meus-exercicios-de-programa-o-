2) Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
tela os valores lidos na ordem inversa.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int vetor[6];

    for (i = 0; i < 6; i++){
        scanf("%d", &vetor[i]);
    }
    for (i = 5; i >= 0; i--){
        printf("Vetor[i] = %d\n", vetor[i]);
    }
    return 0;
}




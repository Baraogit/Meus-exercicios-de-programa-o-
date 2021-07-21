10) Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    int vet[100];


    for (i = 1, j = 0 ; j < 100; i++){
        if (!(i % 7 == 0)){
            vet[j] = i;
            j++;
        }
    }
    for (i = 0; i < 100; i++){
         printf("100 primeiros numeros nao multiplos de 7 = %d\n", vet[i]);
    }
    return 0;
}


5) Crie um programa que contenha um array de inteiros contendo cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, vetor[5], *ponteiro;

    ponteiro = vetor;

    printf("Alimente o vetor com inteiros:\n");
    for (i = 0; i < 5; i++){
      scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 5; i++){
      *(ponteiro + i) *=  2;
    }
    printf("Printando na tela valores de vetor:\n");
    for (i = 0; i < 5; i++){
      printf("%d ", *(ponteiro + i)); // ou ponteiro[i]
    }

 return 0;
}


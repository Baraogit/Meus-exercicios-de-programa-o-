6) Crie um programa que contenha um array contendo cinco elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo valores
pares.

#include <stdio.h>
#include <stdlib.h>
int main(){
  int i, vetor[5], *ponteiro;
  ponteiro = vetor;

  printf("Digite 5 valores:\n");
  for (i = 0; i < 5; i++){
    scanf("%d", (ponteiro + i));
  }
  printf("Enderecos dos indices com valores pares do array: ");
  for (i = 0; i < 5; i++){
    if (*(ponteiro + i) % 2 == 0)
        printf("Indice %d = %x ", i, (ponteiro + i));
  }

 return 0;
}

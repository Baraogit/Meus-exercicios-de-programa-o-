4) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. 
Em seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima.


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
  int i, tamanho_vetor;

  printf("Digite o tamanho do seu vetor: ");
  scanf("%d", &tamanho_vetor);

  int *ponteiro = malloc(tamanho_vetor * sizeof(int));

  printf("Digite os valores desse vetor\n");
  for (i = 0; i < tamanho_vetor; i++)
      scanf("%d", (ponteiro + i));
  printf("Impressao dos valores do vetor: ");
  for (i = 0; i < tamanho_vetor; i++)
      printf("%d", *(ponteiro + i));

  free(ponteiro);
  ponteiro = NULL;

   return 0;
}

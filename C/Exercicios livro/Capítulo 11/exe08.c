8) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um vetor de tamanho N alocado dinamicamente. 
Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int* criarVetor(int n){
  int i, *vetor_ponteiro;
  if (n < 1){
    vetor_ponteiro = NULL;
    return vetor_ponteiro;
  }
  vetor_ponteiro = malloc (n * sizeof(int));
  if (vetor_ponteiro == NULL){
    printf("Nao espaco para alocacao");
    exit(1);
  }

  for (i = 0; i < n; i++){
    *(vetor_ponteiro + i) = i;
  }
  return vetor_ponteiro;
}


int main(){
  int i, valor_digitado, *vetor;
  printf("Digite a quantidade de elementos do vetor: ");
  scanf("%d", &valor_digitado);

  vetor = criarVetor(valor_digitado);

  if (vetor != NULL){
    printf("Valores do vetor: ");
    for (i = 0; i < valor_digitado; i++){
      printf("%d ", *(vetor + i));
    }
  }
  else
     printf("Voce digitou valor menor que 1. Ponteiro recebe NULL");

  free(vetor);
  vetor = NULL;

   return 0;
}

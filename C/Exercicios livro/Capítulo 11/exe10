10) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um vetor de tamanho N alocado dinamicamente. 
Esse vetordeverá ter os seus elementos preenchidos com certo valor, também passado porparâmetro.
Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int* criarVetor(int tamanho_vetor, int elementos_vetor){
  int i, *vetor_ponteiro;
  if (tamanho_vetor < 1){
    vetor_ponteiro = NULL;
    return vetor_ponteiro;
  }
  vetor_ponteiro = malloc (tamanho_vetor * sizeof(int));
  if (vetor_ponteiro == NULL){
    printf("Nao ha espaco na memoria para alocacao");
    exit(1);
  }
  for (i = 0; i < tamanho_vetor; i++){
    *(vetor_ponteiro + i) = elementos_vetor;
  }
  return vetor_ponteiro;
}

int main(){
  int i, elementos_vetor, tamanho_vetor, *recebe_vetor;
  printf("Digite o tamanho do vetor e os elementos: ");
  scanf("%d %d", &tamanho_vetor, &elementos_vetor);

  recebe_vetor = criarVetor(tamanho_vetor, elementos_vetor);

  printf("Elementos do vetor: ");
  for (i = 0; i < tamanho_vetor; i++){
    printf("%d ", *(recebe_vetor + i));
  }
  free(recebe_vetor);


  return 0;
}

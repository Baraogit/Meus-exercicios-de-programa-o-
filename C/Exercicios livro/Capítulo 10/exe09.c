9) Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize índices para percorrer o vetor, apenas aritmética de ponteiros.

sem usar ponteiros
#include <stdio.h>
#include <stdlib.h>

void alimentarVetor (int *vetor, int n){
  int i;
  for (i = 0; i < n; i++){
    scanf("%d", (vetor + i));
  }
}

void printarVetor (int *vetor, int n){
  int i;
  for (i = 0; i < n; i++){
    printf("Posicao %d = %d\n", i, *(vetor + i));
  }
}

int main(){
  int vetor[5];

  alimentarVetor(vetor, 5);
  printarVetor(vetor, 5);

 return 0;
}
-----------------------------------------------------
usando ponteiros

#include <stdio.h>
#include <stdlib.h>

void alimentarVetor (int *ponteiro, int n){
  int i;
  for (i = 0; i < n; i++){
    scanf("%d", (ponteiro + i));
  }
}

void printarVetor (int *ponteiro, int n){
  int i;
  for (i = 0; i < n; i++){
    printf("Posicao %d = %d\n", i, *(ponteiro + i));
  }
}

int main(){
  int vetor[5], *ponteiro;
  ponteiro = vetor;
  alimentarVetor(ponteiro, 5);
  printarVetor(ponteiro, 5);

 return 0;
}

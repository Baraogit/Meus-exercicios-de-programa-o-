14) Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho N cada.
A função deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que C[i] = A[i] + B[i].


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void alimentarVetor(int indice, int *vetorA, int *vetorB){
  int i;
  printf("Digite os elementos para o vetorA:\n");
  for (i = 0; i < indice; i++){
    scanf("%d", (vetorA + i));
  }
  printf("Digite os elementos para o vetorB:\n");
  for (i = 0; i < indice; i++){
    scanf("%d", (vetorB + i));
  }
}

int* criarVetorC(int indice, int *vetorA, int *vetorB){
  int i, *vetorC = malloc (indice * sizeof(int));
  if (vetorC == NULL){
    printf("Nao espaco na memoria para alocacao");
    exit(1);
  }
  for (i = 0; i < indice; i++){
    *(vetorC + i) = *(vetorA + i) + *(vetorB + i);
  }
  return vetorC;
}

int main(){
  int i, indice;
  printf("Digite o indice dos vetores: ");
  scanf("%d", &indice);
  int vetorA[indice], vetorB[indice], *vetorC;

  alimentarVetor(indice, vetorA, vetorB);
  vetorC = criarVetorC(indice, vetorA, vetorB);

  printf("Elementos do vetorC: ");
  for (i = 0; i < indice; i++){
    printf("%d ", *(vetorC + i));
  }

  free(vetorC);

  return 0;
}

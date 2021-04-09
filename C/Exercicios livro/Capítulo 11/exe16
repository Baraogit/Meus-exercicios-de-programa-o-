16) Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e N colunas, e um vetor B de tamanho N.
A função deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que C é o produto da
matriz A pelo vetor B.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void alimentarArrays(int indice, int matrizA[][indice], int *vetorB){
  int i, j;
  printf("Digite os valores do vetor.\n");
  for(i = 0; i < indice; i++)
    scanf("%d", &vetorB[i]);
  printf("Digite os valores da matriz.\n");
  for(i = 0; i < indice; i++)
     for(j = 0; j < indice; j++)
        scanf("%d", &matrizA[i][j]);
}

int* criarVetorC(int indice, int matrizA[][indice], int *vetorB){
  int i, j,  *vetorC;
  vetorC = malloc(indice * sizeof(int));
  if (vetorC == NULL){
    printf("Nao espaco na memoria para alocacao");
    exit(1);
  }
  for(i = 0; i < indice; i++)
     for(j = 0; j < indice; j++)
         vetorC[i] += matrizA[i][j] * vetorB[j];
  return vetorC;
}


int main(){
  int i, indice, *vetorC;
  printf("Digite um valor para o indice: ");
  scanf("%d", &indice);
  int matrizA[indice][indice], vetorB[indice];

  alimentarArrays(indice, matrizA, vetorB);
  vetorC = criarVetorC(indice, matrizA, vetorB);

  for(i = 0; i < indice; i++)
     printf("%d", vetorC[i]);

  free(vetorC);
  vetorC = NULL;

  return 0;
}

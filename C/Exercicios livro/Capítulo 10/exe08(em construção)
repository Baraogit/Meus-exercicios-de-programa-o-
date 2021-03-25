 8) Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros.

Sem usar ponteiros

#include <stdio.h>
#include <stdlib.h>

void alimentarVetor(int *vetor, int n, int elementoVetor){
  int i;
  for (i = 0; i < n; i++)
      *(vetor + i) = elementoVetor;
  for (i = 0; i < n; i++)
      printf("%d ", *(vetor + i));
}

int main(){
  int vetor[5], elementoVetor;

  printf("Digite um valor para alimenter o vetor: ");
  scanf("%d", &elementoVetor);

  alimentarVetor(vetor, 5, elementoVetor);

 return 0;
}
---------------------------------------------------------
com ponteiros
#include <stdio.h>
#include <stdlib.h>

void alimentarVetor(int *ponteiro, int n, int elementoVetor){
  int i;
  for (i = 0; i < n; i++)
      *(ponteiro + i) = elementoVetor;
  for (i = 0; i < n; i++)
      printf("%d ", *(ponteiro + i));
}

int main(){
  int vetor[5], elementoVetor, *ponteiro;
  ponteiro = vetor;

  printf("Digite um valor para alimenter o vetor: ");
  scanf("%d", &elementoVetor);

  alimentarVetor(ponteiro, 5, elementoVetor);

 return 0;
}

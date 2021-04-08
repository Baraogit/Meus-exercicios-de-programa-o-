11) Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro para uma matriz alocada dinamicamente contendo N linhas e N colunas. 
Essa matriz deve conter o valor 1 na diagonal principal e 0 nas demais posições.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int** criarMatriz(int indices_matriz){
  int i, j;
  int **matriz = malloc(indices_matriz * sizeof(int*));

  for (i = 0; i < indices_matriz; i++){
    matriz[i] = malloc(indices_matriz * sizeof(int));
    for (j = 0; j < indices_matriz; j++){
      if (i == j)
        matriz[i][j] = 1;
      else
        matriz[i][j] = 0;
    }
  }
  return matriz;
}

int main(){
  int i, j, indices_matriz, **matriz;
  printf("Digite o valor que sera os indices da matriz: ");
  scanf("%d", &indices_matriz);

  matriz = criarMatriz(indices_matriz);

  for (i = 0; i < indices_matriz; i++){
    for (j = 0; j < indices_matriz; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < indices_matriz; i++){
    free(matriz[i]);
  }
  free(matriz);

  return 0;
}

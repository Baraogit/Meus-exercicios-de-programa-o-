18) Escreva uma função que receba como parâmetro duas matrizes, A e B, e seus
tamanhos. A função deve retornar o ponteiro para uma matriz C, em que C é o
produto da multiplicação da matriz A pela matriz B. Se a multiplicação das matrizes não for possível, retorne um ponteiro nulo.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int** criarMatriz(int linhas, int colunas){
  int **matriz = malloc(linhas * sizeof(int*));
  int i, j;
  if (matriz == NULL){
    printf("Sem espaco para alocacao");
    exit(1);
  }
  printf("Digite os valores da matriz:\n");
  for(i = 0; i < linhas; i++){
    matriz[i] = malloc(colunas * sizeof(int));
    for (j = 0; j < colunas; j++){
      scanf("%d", &matriz[i][j]);
    }
  }
  return matriz;
}

int** alocarMatrizC(int linhas_matrizA, int colunas_matrizA, int linhas_matrizB, int colunas_matrizB, int **matrizA, int **matrizB){
    int i, j, **matrizC;
    if (linhas_matrizA != linhas_matrizB || colunas_matrizA != colunas_matrizB){
      printf("Nao foi possivel criar a matrizC: linhas e colunas da matrizA e MatrizB, diferem");
      matrizC = NULL;
      return matrizC;
    }
    else
       matrizC = malloc(linhas_matrizA * sizeof(int*));

    if (matrizC == NULL){
      printf("Nao ha espaco na memoria para alocacao");
      exit(1);
    }
    for (i = 0; i < linhas_matrizA; i++){
      matrizC[i] = malloc(colunas_matrizA * sizeof(int));
      for (j = 0; j < colunas_matrizA; j++){
        matrizC[i][j] = matrizA[i][j] * matrizB[i][j];
      }
    }
  
    return matrizC;
}

int main(){
  int i, j, linhas_matrizA, colunas_matrizA, linhas_matrizB, colunas_matrizB;
  int **matrizA, **matrizB, **matrizC;

  printf("Digite as linhas e colunas para a matrizA: ");
  scanf("%d %d", &linhas_matrizA, &colunas_matrizA);
  matrizA = criarMatriz(linhas_matrizA, colunas_matrizA);

  printf("Digite as linhas e colunas para a matrizB: ");
  scanf("%d %d", &linhas_matrizB, &colunas_matrizB);
  matrizB = criarMatriz(linhas_matrizB, colunas_matrizB);

  matrizC = alocarMatrizC(linhas_matrizA, colunas_matrizA, linhas_matrizB, colunas_matrizB, matrizA, matrizB);

  if (matrizC != NULL){
    printf("Valores da matrizC\n");
    for (i = 0; i < linhas_matrizA; i++){
      for (j = 0; j < colunas_matrizA; j++){
        printf("%d ", matrizC[i][j]);
      }
      printf("\n");
    }
  }


  for (i = 0; i < linhas_matrizA; i++)
    free(matrizC[i]);
  for (i = 0; i < linhas_matrizA; i++)
    free(matrizA[i]);
  for (i = 0; i < linhas_matrizB; i++)
    free(matrizB[i]);

  free(matrizA);
  free(matrizB);
  free(matrizC);
  matrizA = NULL;
  matrizB = NULL;
  matrizC = NULL;

  return 0;
}

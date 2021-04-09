17) Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e N colunas.
. A função deve retornar o ponteiro para um vetor B de tamanho N alocado dinamicamente, em que cada posição de B é a soma dos números daquela
coluna da matriz.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void alimentarMatriz(int linhas, int colunas, int matrizA[][colunas]){
  int i, j;
  printf("Digite os valores da matriz.\n");
  for(i = 0; i < linhas; i++)
     for(j = 0; j < colunas; j++)
        scanf("%d", &matrizA[i][j]);
}

int* criarVetorB(int linhas, int colunas, int matrizA[][colunas]){
  int i, j,  *vetorB;
  vetorB = malloc(linhas * sizeof(int));
  if (vetorB == NULL){
    printf("Nao espaco na memoria para alocacao");
    exit(1);
  }
  for(i = 0; i < linhas; i++)
     for(j = 0; j < colunas; j++)
         vetorB[i] += matrizA[i][j];
  return vetorB;
}


int main(){
  int i, linhas, colunas, *vetorB;
  printf("Digite valores para linhas e colunas da matriz: ");
  scanf("%d %d", &linhas, &colunas);
  int matrizA[linhas][colunas];

  alimentarMatriz(linhas, colunas, matrizA);
  vetorB = criarVetorB(linhas, colunas, matrizA);

  for(i = 0; i < linhas; i++)
     printf("%d\n", vetorB[i]);

  free(vetorB);
  vetorB = NULL;

  return 0;
}

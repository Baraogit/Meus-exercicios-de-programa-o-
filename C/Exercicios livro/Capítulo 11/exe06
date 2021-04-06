6) Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões da matriz deverão ser lidas do usuário. 
Em seguida, escreva uma função que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no caso contrário.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int verificarNumeroNaMatriz(int **matriz_ponteiro, int linhas, int colunas, int n){
  int i, j;
  for (i = 0; i < linhas; i++){
    for (j = 0; j < colunas; j++){
      if (n == matriz_ponteiro[i][j])
         return 1;
    }
  }
  return 0;
}

int main(){
  int i, j, **matriz_ponteiro, linhas, colunas, numero_para_procurar_na_matriz, retorno;
  printf("Digite a quantidade de linhas e colunas da matriz: ");
  scanf("%d %d", &linhas, &colunas);

  matriz_ponteiro = malloc (linhas * sizeof(int*));

  printf("Digite os valores da matriz.\n");
  for (i = 0; i < linhas; i++){
    matriz_ponteiro[i] = malloc (colunas * sizeof(int));
    for (j = 0; j < colunas; j++){
      scanf("%d", &matriz_ponteiro[i][j]);
    }
  }
  printf("Digite um valor para verificar se o mesmo consta na matriz: ");
  scanf("%d", &numero_para_procurar_na_matriz);

  retorno = verificarNumeroNaMatriz(matriz_ponteiro, linhas, colunas, numero_para_procurar_na_matriz);

  if (retorno == 1)
     printf("Numero digitado %d fora encontado na matriz", numero_para_procurar_na_matriz);
  else
     printf("Numero digitado %d nao fora encontado na matriz", numero_para_procurar_na_matriz);


  for (i = 0; i < colunas; i++)
      free(matriz_ponteiro[i]);

  free(matriz_ponteiro);
  matriz_ponteiro = NULL;

   return 0;
}

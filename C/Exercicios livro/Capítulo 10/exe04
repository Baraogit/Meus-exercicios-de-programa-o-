4) Crie um programa que contenha uma matriz de float contendo três linhas e três
colunas. Imprima o endereço de cada posição dessa matriz.

#include <stdio.h>
#include <stdlib.h>
int main(){
  float matriz[3][3], *ponteiro;
  int i;
  ponteiro = matriz;

  printf("(ponteiro + i) = ");
  for (i = 0; i < 9; i++){
    printf("%x ", (ponteiro + i));
  }
  printf("\n\n");
  printf("(*matriz + i) = ");
  for (i = 0; i < 9; i++){
    printf("%x ", (*matriz + i));
  }

 return 0;
}

-----------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main(){
  float matriz[3][3], *ponteiro;
  int i, j;
  ponteiro = matriz;

  printf("(ponteiro + i) = ");
  for (i = 0; i < 9; i++){
    printf("%x ", (ponteiro + i));
  }
  printf("\n\n");
  // Esse algoritmo abaixo tirado https://github.com/misaelrezende/Exercicios-do-Livro-Linguagem-C-Completa-e-Descomplicada/blob/master/Capitulo%2010/ex04.c
  printf("&(*( *(matriz + i) + j)):\n");
  for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            // &(*( *(matriz + i) + j))) eh equivalente a &matriz[i][j]
            printf("%p\n", &(*( *(matriz + i) + j)) );
        }
  }

 return 0;
}

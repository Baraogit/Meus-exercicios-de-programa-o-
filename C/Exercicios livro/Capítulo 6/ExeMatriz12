12) Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a
soma dos elementos dessa matriz que estão abaixo da diagonal principal.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat[6][6];
    int i, j, soma;

    for (i = 0; i < 6; i++){
         for (j = 0; j < 6; j++){
              printf("mat [%d] [%d] = ", i, j);
              scanf("%d", &mat[i][j]);
         }
    }
    for (i = 0; i < 6; i++){
         for (j = 0; j < 6; j++){
              if (i > j)
                soma += mat[i][j];
         }
    }
    printf("Soma dos elementos abaixo da diagonal = %d\n", soma);
    return 0;
}

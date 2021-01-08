11) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a
soma dos elementos dessa matriz que estão acima da diagonal principal.


#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat[5][5];
    int i, j, soma;

    for (i = 0; i < 5; i++){
         for (j = 0; j < 5; j++){
              printf("mat [%d] [%d] = ", i, j);
              scanf("%d", &mat[i][j]);
         }
    }
    for (i = 0; i < 5; i++){
         for (j = 0; j < 5; j++){
              if (i < j)
                soma += mat[i][j];
         }
    }
    printf("Soma dos elementos acima da diagonal = %d\n", soma);
    return 0;
}

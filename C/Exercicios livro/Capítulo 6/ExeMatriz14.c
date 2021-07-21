14) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos
elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule
também a soma dos elementos que não pertencem a nenhuma das duas diagonais.
Imprima na tela a diferença entre os dois valores.


#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat[5][5];
    int i, j, somaDiagonal = 0, somaNaoDiagonal = 0;

    for (i = 0; i < 5; i++){
         for (j = 0; j < 5; j++){
              printf("mat [%d] [%d] = ", i, j);
              scanf("%d", &mat[i][j]);
         }
    }
    for (i = 0; i < 5; i++){
         for (j = 0; j < 5; j++){
              if (i == j || i+j == 4)
                somaDiagonal += mat[i][j];
              if (i != j && i+j != 4)
                somaNaoDiagonal += mat[i][j];
         }
    }
    printf("Soma das duas diagonais = %d\n", somaDiagonal);
    printf("Soma na nao diagonal = %d\n", somaNaoDiagonal);
    printf("Diferença entre eles  = %d\n", somaDiagonal - somaNaoDiagonal);
    return 0;
}

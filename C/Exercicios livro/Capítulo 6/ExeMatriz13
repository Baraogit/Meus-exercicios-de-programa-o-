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
              if (i != j && i+j != 4)
                soma += mat[i][j];
         }
    }
    printf("Soma dos elementos abaixo da diagonal = %d\n", soma);
    return 0;
}
---------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat[5][5];
    int i, j, soma = 0;

    for (i = 0; i < 5; i++){
         for (j = 0; j < 5; j++){
              printf("mat [%d] [%d] = ", i, j);
              scanf("%d", &mat[i][j]);
         }
    }
    for (i = 0; i < 5; i++){
         for (j = 0; j < 5; j++){
              if (!(i == j || i+j == 4))
                soma += mat[i][j];
         }
    }
    printf("Soma dos elementos abaixo da diagonal = %d\n", soma);
    return 0;
}

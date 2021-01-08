15) Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule
e imprima a matriz B, sendo que B = A2


#include <stdio.h>
#include <stdlib.h>
int main(){
    int matA[5][5], matB[5][5];
    int i, j;

    for (i = 0; i < 5; i++){
         for (j = 0; j < 5; j++){
              printf("mat [%d] [%d] = ", i, j);
              scanf("%d", &matA[i][j]);
         }
    }
    for (i = 0; i < 5; i++){
         for (j = 0; j < 5; j++){
              matB[i][j] = matA[i][j] * matA[i][j];
         }
    }
    printf("Matriz B\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
              printf("%d\n", matB[i][j]);
         }
    }
    return 0;
}

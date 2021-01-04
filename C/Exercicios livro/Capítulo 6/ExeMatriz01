1) Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
menor valor contido nessa matriz.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat[3][3];
    int i, j, menor;

    printf("Digite 9 valores:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
             scanf("%d", &mat[i][j]);
        }
    }
    menor = mat[0][0];
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (mat[i][j] < menor)
                menor = mat[i][j];
        }
    }
    printf("Menor valor = %d", menor);

    return 0;
}

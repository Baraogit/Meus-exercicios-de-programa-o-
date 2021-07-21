Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3
× 3 de números inteiros. Em seguida, calcule um vetor contendo três posições, em
que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
Exiba na tela esse array.


#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat[3][3], vet[3] = {0};
    int i, j;

    printf("Digite 9 valores\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Mat[%d] [%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (j == 0)
                vet[0] = vet[0] + mat[i][j];
            if (j == 1)
                vet[1] = vet[1] + mat[i][j];
            if (j == 2)
                vet[2] = vet[2] + mat[i][j];
        }
    }
    printf("\n");
    for (i = 0; i < 3; i++){
        printf("Soma Coluna[%d] = %d\n", i, vet[i]);
    }
    return 0;
}

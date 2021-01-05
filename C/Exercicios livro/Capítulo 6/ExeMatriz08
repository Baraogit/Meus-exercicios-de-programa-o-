 8) Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus elementos são da forma:
A[i][j] = 2i + 7j – 2 se i < j
A[i][j] = 3i2 – 1 se i = j
A[i][j] = 4i3 + 5j2 + 1 se i > j

#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat[10][10];
    int i, j;


    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (i < j)
                mat[i][j] = 2 * i + 7 * j - 2;
           else
            if (i = j)
                    mat[i][j] = 3 * (i * i) - 1;
              else
                 mat[i][j] = 4 *(i* i * i) + 5 * (j * j) + 1;
        }
    }
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d\n", mat[i][j]);
        }
    }
    return 0;
}

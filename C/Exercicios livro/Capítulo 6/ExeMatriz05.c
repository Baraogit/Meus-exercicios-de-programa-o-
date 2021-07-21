5) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores negativos ela possui.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat[4][4];
    int i, j, cont = 0;

    printf("Digite 16 valores:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
            if (mat[i][j] < 0)
                cont++;
        }
    }
    printf("Quantidade de valors mnegativos: %d", cont);
    return 0;
}

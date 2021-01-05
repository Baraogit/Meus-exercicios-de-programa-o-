6) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal principal.


#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat[3][3];
    int i, j, soma = 0;

    printf("Digite 9 valores:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Matriz [%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (j == i)
                soma += mat[i][j];
        }
    }
    printf("Soma da diagonal = %d\n", soma);
    return 0;
}

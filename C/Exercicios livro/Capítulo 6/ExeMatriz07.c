7) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal secundária.

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
            if ( (j == 1 && i == 1) || (i == 0 && j == 2) || (i == 2 && j == 0) )
                soma += mat[i][j];
        }
    }
    printf("Soma da diagonal secundaria = %d\n", soma);
    return 0;
}
---------------------------------------------------------------------------------
https://github.com/misaelrezende/Exercicios-do-Livro-Linguagem-C-Completa-e-Descomplicada/blob/master/Capitulo%206/6.7.2/ex07.c
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
            if (i+j == 2)
                soma += mat[i][j];
        }
    }
    printf("Soma da diagonal secundaria = %d\n", soma);
    return 0;
}

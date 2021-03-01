7) Crie uma função que receba uma matriz A contendo 3 linhas e 3 colunas e
retorne a soma dos seus elementos.

#include <stdio.h>

void somaElementosMatriz (int mat[][3], int *soma){
    int i, j; 
    for(i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            *soma += mat[i][j];
        }
    }
}

int main(){
    int i, j, somaElementos = 0;
    int matriz[3][3];
    printf("Informe 9 valores para a matriz: ");
    for(i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]); 
        }
    }
    somaElementosMatriz(matriz, &somaElementos);
    
    printf("Soma dos elementos da matriz = %d", somaElementos);

    return 0;
}

4) Faça um programa que possua um array de nome A que armazene seis números
inteiros. O programa deve executar os seguintes passos:
 a) Atribua os seguintes valores a esse array: 1, 0, 5, −2, −5, 7.
Vetores e matrizes – arrays 129
 b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5]
do array e mostre na tela essa soma.
 c) Modifique o array na posição 4, atribuindo a essa posição o valor 100.
 d) Mostre na tela cada valor do array A, um em cada linha.
 
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, soma;
    int A[6] = {1, 0, 5, -2, -5, 7};

    soma = A[0] + A[1] + A[5];
    printf("Soma dos elementos na posicao [0] [1] [5] = %d\n", soma);
    A[4] = 100;
    for (i = 0; i < 6; i++){
        printf("A[%d] = %d\n", i, A[i]);
    }
    return 0;
}

 9) Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C calculando C = A − B. Mostre na tela os dados
do array C.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int a[10], b[10], c[10];

    printf("Vetor a\n");
    for (i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &a[i]);
    }
    printf("Vetor B\n");
    for (i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 10; i++){
        c[i] = a[i] - b[i];
    }
    printf("Vetor C\n");
    for (i = 0; i < 10; i++){
        printf("C[%d] = %d\n", i, c[i]);
    }
    return 0;
}

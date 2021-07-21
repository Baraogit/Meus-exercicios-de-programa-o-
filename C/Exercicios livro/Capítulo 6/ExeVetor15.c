15) Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela.

#include <stdio.h>
#include <stdlib.h>
int main(){
    float vet[10], troca = 0;
    int i, j;

    printf("Digite 10 valores:\n");
    for (i = 0; i < 10; i++){
        scanf("%f", &vet[i]);
    }
    for (i = 0; i < 9; i++){
        for (j = i+1; j < 10; j++){
            if (vet[i] > vet[j]){
                troca = vet[i];
                vet[i] = vet[j];
                vet[j] = troca;
            }
        }
    }
    printf("Impressao dos valores em ordem:\n");
    for (i = 0; i < 10; i++){
        printf("%f\n", vet[i]);
    }
    return 0;
}

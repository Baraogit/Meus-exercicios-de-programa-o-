 5) Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa
deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,  x, y;
    int vet[8];

    for (i = 0; i < 8; i++){
        scanf("%d", &vet[i]);
    }
    printf("Digite dois valores no intervalo de 0 a 7: ");
    scanf("%d %d", &x, &y);
    printf("Soma dos elementos escolhidos = %d", vet[x] + vet[y]);
    return 0;
}

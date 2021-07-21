8) Faça um programa que preencha um vetor com 10 números reais. Em seguida,
calcule e mostre na tela a quantidade de números negativos e a soma dos números
positivos desse vetor.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, contNegativos = 0, somaPositivos = 0;
    int vet[10];

    for (i = 0; i < 10; i++){
        printf("digite um numero: ");
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < 10; i++){
        if (vet[i] < 0)
            contNegativos++;
        else
            if (vet[i] > 0)
                somaPositivos += vet[i];
    }
    printf("Quantidade negativos = %d\n", contNegativos);
    printf("Soma dos positivos = %d\n", somaPositivos);
    return 0;
}

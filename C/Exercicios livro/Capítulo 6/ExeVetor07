7) Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, maior, menor;
    int X[10];

    for (i = 0; i < 10; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &X[i]);
        if (i == 0)//essa condição faz com que uma única vez, as variáveies maior e menor recebam o primeiro elemento de X[0]
            maior = menor = X[i];
        if (X[i] > maior)
            maior = X[i];
        if (X[i] < menor)
            menor = X[i];
    }
    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
    return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------
A diferença  desse algoritmo para o outro, é a separação, em cada bloco de comando faz uma alguma coisa. O primiero "for" faz a leitura, enquanto o segundo ordena. 
Esse algoritmo é muito mais interessante que o de cima, já que o de cima, nem precisaria guardar dados em vetores.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, maior, menor;
    int X[10];

    for (i = 0; i < 10; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &X[i]);
        if (i == 0)//essa condição faz com que uma única vez, as variáveies maior e menor recebam o primeiro elemento de X[0]
            maior = menor = X[i];
    }
    for (i = 0; i < 10; i++){
        if (X[i] > maior)
            maior = X[i];
        if (X[i] < menor)
            menor = X[i];
    }
    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
    return 0;
}

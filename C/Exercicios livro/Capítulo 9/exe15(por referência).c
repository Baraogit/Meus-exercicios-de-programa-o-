15) Elabore uma função que receba um vetor contendo N valores e retorne por referência o maior e o menor elemento desse vetor.

#include <stdio.h>

void retornarMaiorMenorElemento(int *vetor, int qto, int *maior,int *menor){
    int i; 
    *maior = *menor = vetor[0]; 
    for (i = 0; i < qto; i++){
        if (*maior < vetor[i])
           *maior = vetor[i];
        if (*menor > vetor[i])
           *menor = vetor[i];
    }
}

int main(){
    int qto, i, maior = 0, menor = 0;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &qto);
    int vetor[qto]; 
    
    printf("Digite %d valores:\n", qto);
    for (i = 0; i < qto; i++){
        scanf("%d", &vetor[i]);
    }
    retornarMaiorMenorElemento(vetor, qto, &maior, &menor);
    
    printf("Maior valor = %d\n", maior);
    printf("Menor valor = %d\n", menor);
    
    return 0;
}

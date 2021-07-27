12) Escreva uma função que receba como parâmetro um vetor contendo N valores inteiros. Essa função deve retornar, por referência, dois valores: a soma dos números
pares e ímpares.

#include <stdio.h>

void somarElementos(int *vetor, int qto, int *somaPares, int *somaImpares){
    int i;
    for(i = 0; i < qto; i++){
        if (vetor[i] % 2 == 0)
           *somaPares += vetor[i];
        else
           *somaImpares += vetor[i];
    }
}

void lerElementosVetor(int *vetor, int qto){
    int i; 
    for (i = 0; i < qto; i++){
        scanf("%d", &vetor[i]); 
    }
}

int main(){
    int qto, somaPares = 0, somaImpares = 0;
    printf("Informe quantos numeros tera o vetor: ");
    scanf("%d", &qto);
    int vetor[qto];
    
    printf("Informe os %d elementos do vetor:\n", qto);
    lerElementosVetor(vetor, qto);
    somarElementos(vetor, qto, &somaPares, &somaImpares);
    
    printf("Soma dos pares = %d\n", somaPares);
    printf("Soma dos impares = %d\n", somaImpares); 
    
    return 0;
}

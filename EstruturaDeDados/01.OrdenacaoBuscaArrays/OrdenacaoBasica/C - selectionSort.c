#include <stdlib.h>
#include <stdio.h>

void selectionSort(int *vetor, int n){
    int i, j, menor, trocaPosicao;

    for (i = 0; i < n - 1; i++){
        menor = i; 
        for (j = i + 1; j < n; j++){ 
            if(vetor[j] < vetor[menor])
                menor = j;
        }
        if (i != menor){ 
            trocaPosicao = vetor[i]; 
            vetor[i] = vetor[menor]; 
            vetor[menor] = trocaPosicao;
        }
    }
}

int main(){
    int vetor[5] = {5, 3, 2 , 4, 1};

    selectionSort(vetor, 5);

    for (int i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }

  return 0;
}


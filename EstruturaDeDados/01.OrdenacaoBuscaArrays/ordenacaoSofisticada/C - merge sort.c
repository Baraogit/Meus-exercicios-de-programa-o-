#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int *vetor, int inicio, int meio, int fim){
    int  i, j, k;

    int fim1 = 0, fim2 = 0; //recebe falso
    int tamanho = fim - inicio + 1; // tamanho recebe o tamanho do vetor
    int parte1 = inicio; // 1º posição da 1º parte do vetor
    int parte2 = meio+1; // 1º posição da 2º parte do vetor

    // vetor que irá receber a ordenação
    int *vetorAux = malloc(tamanho * sizeof(int));

    if(vetorAux != NULL){
        for(i = 0; i < tamanho; i++){ // percorro o tamanho do vetorAux
            if(!fim1 && !fim2){ // diferente de falso, ou seja, verdadeiro
                if(vetor[parte1] < vetor[parte2])
                    vetorAux[i]  = vetor[parte1++];
                else
                    vetorAux[i] = vetor[parte2++];

                if(parte1 > meio) fim1 = 1;
                if(parte2 > fim) fim2 = 1;
            }else{
                if(!fim1)
                    vetorAux[i] = vetor[parte1++];
                else

                    vetorAux[i] = vetor[parte2++];
            }
        }
        for(j = 0, k = inicio; j < tamanho; j++, k++)
            vetor[k] = vetorAux[j];
    }
    free(vetorAux);
}


void mergeSort(int *vetor, int inicio, int fim){
    int meio;

    if(inicio < fim){
        meio = floor((inicio + fim) / 2);
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio+1, fim);
        merge(vetor, inicio, meio, fim);
    }

}

int main(){
    int vetor[5] = {5, 3, 2 , 4, 1};

    mergeSort(vetor, 0, 4);

    for(int i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }

  return 0;
}

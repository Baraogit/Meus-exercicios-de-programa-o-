#include <stdlib.h>
#include <stdio.h>

void bubbleSort(int *vetor, int numeroElementosArray){
  int i, auxTrocaValor, continuaLoopDoWhile, finalArray = numeroElementosArray;

  do{
        continuaLoopDoWhile = 0;
        for (i = 0; i < finalArray - 1; i++){
            if (vetor[i] > vetor[i+1]){
                auxTrocaValor = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = auxTrocaValor;
                continuaLoopDoWhile = i;
            }
        }
        finalArray--;

  }while(continuaLoopDoWhile != 0);

}

int main(){
    int vetor[5] = {5, 3, 2 , 4, 1};

    bubbleSort(vetor, 5);

    for (int i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }

  return 0;
}

3) Escreva uma função que receba um array de 10 elementos e retorne a sua soma.

#include <stdio.h>

void somaVetor (int vetor[], int n, int *soma){
    int i; 
    for (i = 0; i < 10; i++){
        *soma+= vetor[i];
    }
}

int main(){
    int i, n, soma = 0; 
    int vet[10];
    
    printf("Digite 10 valores\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }
    somaVetor(vet, 10, &soma);
    
    printf("Valor da soma = %d", soma); 
    return 0;
}

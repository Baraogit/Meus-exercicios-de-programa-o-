4) Escreva uma função que receba um array contendo a nota de 10 alunos e retorne
a média dos alunos.

#include <stdio.h>

void calculaMediaNotas(float vetor[], int n, float *media){
    int i; 
    float somaNotas = 0; 
    
    for (i = 0; i < n; i++){
        somaNotas += vetor[i];
    }
    *media = somaNotas / 10; 
}

int main(){
    float vetor[10], media;
    int i; 
    
    printf("Digite as 10 notas:\n");
    for (i = 0; i < 10; i++){
        scanf("%f", &vetor[i]);
    }
    calculaMediaNotas(vetor, 10, &media);
    
    printf("Media = %.2f", media);
    return 0;
}

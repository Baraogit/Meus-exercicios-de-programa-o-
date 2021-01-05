#include <stdio.h>
#include <math.h>

int main(){
    int i;
    float vetor[10], media = 0, variancia = 0, d;
    printf("Digite os 10 numeros do vetor: ");
    
    for(i = 0; i < 10; i++){
        scanf("%f", &vetor[i]);
        media = (media + vetor[i]) / 9;
    }
    for(i = 0; i < 10; i++)
        variancia = pow(vetor[i] - media, 2);
    
    d = sqrt(variancia);
    printf("Desvio padrao: %f\n", d);
    return 0;
}


*Copiei e colei de https://github.com/misaelrezende/Exercicios-do-Livro-Linguagem-C-Completa-e-Descomplicada/blob/master/Capitulo%206/6.7.1/ex14.c
Por preguiça de ter que lida pela milésima vez, com essas formulas matematicas.

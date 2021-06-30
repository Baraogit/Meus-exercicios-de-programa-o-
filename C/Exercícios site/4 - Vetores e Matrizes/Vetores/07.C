#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10], maior, posicaoMaior = 0;
    int i, j;

    printf("Digite 10 valores:\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }
    maior = vet[0];
    for (i = 0; i < 10; i++){
        if (vet[i] > maior){
            maior = vet[i];
            posicaoMaior = i;
        }
    }
    printf("Maior valor %d na posicao vet[%d].", maior, posicaoMaior);
    return 0;
}

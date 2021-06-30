#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10];
    int i;

    printf("Digite 10 valores:\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
        if (vet[i] < 0)
            vet[i] = 0;
    }
    printf("Valores digitados com negativos transformados em 0\n");
    for (i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}

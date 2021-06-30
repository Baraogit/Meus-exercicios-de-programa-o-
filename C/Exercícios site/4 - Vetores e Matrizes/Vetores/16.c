#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[5];
    int i, j, codigo;

    printf("Digite 10 valores:\n");
    for (i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }
    printf("Digite um codigo: ");
    scanf("%d", &codigo);

    switch (codigo){
        case 0:
            break;
        case 1:
            printf("Numero digitados:\n");
            for (i = 0; i < 5; i++){
                printf("%d ", vet[i]);
            }
            break;
        case 2:
            printf("Numeros digitados na ordem inversa:\n");
            for (i = 4; i >= 0; i--){
                printf("%d ", vet[i]);
            }
            break;
        default : printf("Codigo invalido\n");
    }
    return 0;
}

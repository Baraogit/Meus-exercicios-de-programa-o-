11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor armazenando esse resultado em outro
vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos
de números.

#include <stdio.h>

int main(){
    int a[10], b[10], i;
    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 10; i++){
        b[i] = a[i] * a[i];
    }
    for(i = 0; i < 10; i++){
        printf("Vetor A[%d] = %d\n",i, a[i]);
    }
    for(i = 0; i < 10; i++){
        printf("Vetor B[%d] = %d\n",i, b[i]);
    }
    return 0;
}


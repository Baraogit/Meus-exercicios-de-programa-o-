14) Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa
no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma
dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8,
13, 21, 34.


#include <stdio.h>

int main()
{
    int i, anterior = 0, atual = 1, proximo, termo;

    printf("Digite o numero de termos: ");
    scanf("%d", &termo);
    for (i = 0; i < termo; i++){
        printf("%d\n", atual);
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
    }
    return 0;
}

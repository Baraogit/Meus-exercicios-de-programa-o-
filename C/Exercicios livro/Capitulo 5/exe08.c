8) Faça um programa que leia 10 inteiros e imprima sua média.

#include <stdio.h>

int main()
{
    int i = 0, valor, somaValor = 0;
    float  media; 

    while (i < 10){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        somaValor += valor;
        i++;
    }
    media = somaValor / 10; 
    printf("Media dos valors digitados = %f", media); 

    return 0;
}
---------------------------------------------------------

#include <stdio.h>

int main()
{
    int i, valor, somaValor = 0;
    float media;
    
    for (i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        somaValor += valor; 
    }
    media = somaValor / 10; 
    printf("Media dos valores digitados: %.2f", media);

    return 0;
}
--------------------------------------------------------------

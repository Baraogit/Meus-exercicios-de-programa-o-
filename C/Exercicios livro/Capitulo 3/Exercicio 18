18) Elabore um programa que leia dois números inteiros e exiba o deslocamento, à
esquerda e à direita, do primeiro número pelo segundo.

#include <stdio.h>

int main()
{
    short int numero1, numero2; 
    printf("Digite dois numeros:\n");
    scanf("%d %d", &numero1, &numero2);
    
    printf("Deslocamento a direita : %d\n", numero1 << numero2); 
    printf("Deslocamento a esquerda : %d\n", numero1 >> numero2);
    
    return 0;
}
----------------------------------------------------------------------------------
int main()
{
    short int numero1, numero2, deslocamento_direita, deslocamento_esquerda; 
    printf("Digite dois numeros:\n");
    scanf("%d %d", &numero1, &numero2);
    
    deslocamento_direita = numero1 << numero2;
    deslocamento_esquerda = numero1 >> numero2;
    
    printf("Deslocamento a direita : %d\n", deslocamento_direita); 
    printf("Deslocamento a esquerda : %d\n", deslocamento_esquerda);
    

    return 0;
}

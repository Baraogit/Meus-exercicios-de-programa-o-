8) A multiplicação de dois números inteiros pode ser feita através de somas sucessivas(por exemplo, 2 * 3 = 2 + 2 + 2).
Crie uma função recursiva que calcule a multiplicação por somas sucessivas de dois inteiros.

#include <stdio.h>

int multiplicarPorSoma(int numero, int somaNumeros){
    int resultado; 
    if (somaNumeros == 0)
       return 0; 
    else
       return numero + multiplicarPorSoma(numero, somaNumeros - 1);
}

int main(){
    int numero, somaNumeros;
    printf("Digite um valor e logo em seguida, digite quantas vezes esse numero será somando por ele mesmo: "); 
    scanf("%d %d", &numero, &somaNumeros);
    
    printf("Resultado = %d", multiplicarPorSoma(numero, somaNumeros)); 

    return 0;
}

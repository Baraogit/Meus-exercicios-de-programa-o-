47. Leia um numero inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.

#include <stdio.h>

int main()
{
    short int numero, linha1 , linha2, linha3, linha4; 
    printf("Digite um valor com 4 dígitos:\n");
    scanf("%d", &numero);
    
    linha1 = numero / 1000; // isola o primeiro dígito
    linha2 = numero / 100 % 10; // isola o segundo dígito
    linha3 = numero / 10 % 10;  // isola o tercerio dígito
    linha4 = numero % 10;  // isola o quarto dígito
    
    printf("%d\n%d\n%d\n%d", linha1, linha2, linha3, linha4);
     

    return 0;
}

10) Escreva uma função que receba uma string e retorne se ela é um palíndromo (1)
ou não (0). Um palíndromo é uma palavra que tem a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos:
ovo, arara, rever, asa, osso etc.

#include <stdio.h>

int descobrirPalindromo (char *palavra){
    int i, j, resultadoPalindromo;
    for (i = 0, j = strlen(palavra)-1; i <= j; i++, j--){
        if (palavra[i] != palavra[j])
            resultadoPalindromo = 0;
        else
           resultadoPalindromo = 1; 
    }
    return resultadoPalindromo; 
}

int main(){
    char palavra[50];
    int recebeRetornoFuncao; 
    
    printf("Digite uma palavra e descubra se eh um palindromo: ");
    scanf("%s", palavra); 
    
    recebeRetornoFuncao = descobrirPalindromo(palavra);
    
    if (recebeRetornoFuncao == 1)
        printf("%s eh um palindromo", palavra);
    else
       if (recebeRetornoFuncao == 0)
           printf("%s nao eh um palindromo", palavra);

    return 0;
}

7) Faça um programa que leia uma string e imprima uma mensagem dizendo se ela
é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade
de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
Exemplos: ovo, arara, rever, asa, osso etc.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[20], strInvertida[20];
    int i, j;

    printf("Digite uma string: ");
    gets(str);

    for (i = strlen(str)- 1, j = 0; i >= 0; i--, j++){
        strInvertida[j] = str[i];
    }
    strInvertida[j] = '\0';
    if (strcmp(str, strInvertida) == 0)
        printf("Eh um palindromo");
    else
        printf("Nao eh um palindromo");
    
   return 0;
}


Consegui resolver sozinho. Achei que seria super difícil, até que tive uma ideia de copiar uma string para outra, invertendo. Se forem iguais, então, a palavra
é um palíndromo. 
----------------------------------------------------------------------
https://github.com/misaelrezende/Exercicios-do-Livro-Linguagem-C-Completa-e-Descomplicada/blob/master/Capitulo%207/ex07.c


#include <stdio.h>

int main(){
    char palavra[50];
    int i, j, tamanho = 0;
    scanf("%s", palavra);
    
    // obter o tamanho da palavra
    for(i = 0; palavra[i] != '\0'; i++)
        tamanho++;

    for(i = 0, j = tamanho - 1; i <= j; i++, j--){
        if(palavra[i] != palavra[j]){
            printf("Nao eh Palindromo\n");
            return 0; // se nao for palindromo, ja finaliza o programa
        }
    }
    // so vai executar se o IF acima nao for executado
    printf("Eh Palindromo\n");
    return 0;
}

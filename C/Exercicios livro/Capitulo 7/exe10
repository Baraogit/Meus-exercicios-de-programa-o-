10) Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está
entre 97 e 122.

#include <stdio.h>
#include <string.h>
int main(){
    char palavra[100];
    int i;

    printf("Digite uma string: ");
    gets(palavra);

    for (i = 0; i < strlen(palavra); i++){
        if (palavra[i] != ' ')
            palavra[i]-= 32;
    }
    printf("Palavra = %s", palavra);

    return 0;
}

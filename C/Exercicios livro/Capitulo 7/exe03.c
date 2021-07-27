 3) Sem usar a função strlen(), faça um programa que leia uma string e imprima
quantos caracteres ela possui.

#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[20];
    int i, cont = 0;

    printf("Digite uma string: ");
    gets(str); //Se usar gets para ler uma string, a condição de parada tem que ser ''\0”.
    for (i = 0; str[i] != '\0'; i++){
        cont++;
    }
    printf("Numero de caracteres da string: %d", cont);

   return 0;
}


--------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[20];
    int i, cont = 0;

    printf("Digite uma string: ");
    gets(str); // Se usar fgets para ler uma string, a condição de parada tem que ser '\n'
    for (i = 0; str[i] != '\n'; i++){
        cont++;
    }
    printf("Numero de caracteres da string: %d", cont);

   return 0;
}

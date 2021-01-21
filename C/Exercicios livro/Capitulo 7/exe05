5) Faça um programa que leia uma string e a inverta. A string invertida deve ser
armazenada na mesma variável. Em seguida, imprima a string invertida.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[20];
    int i, j, aux = 0;

    printf("Digite uma string: ");
    gets(str);
    for (i = strlen(str) - 1, j = 0 ; j < i; j++, i--){
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
    }
    printf("%s", str);
   return 0;
}

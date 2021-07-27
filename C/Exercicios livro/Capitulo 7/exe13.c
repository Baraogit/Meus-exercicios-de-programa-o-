13) Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j
da string S.

#include <stdio.h>
#include <string.h>
int main(){
    char S[100];
    int i, j;

    printf("Digite uma string: ");
    gets(S);
    printf("Digite dois valores entre 1 ate %d.\n", strlen(S));
    scanf("%d %d", &i, &j);
    if (i <= j){
        printf("String contida entre %d a %d:\n", i, j);
        for (i = i-1; i <= j-1; i++){
            printf("%c", S[i]);
        }
    }
    else
        printf("O primeiro valor deve ser menor que o segundo");
    return 0;
}

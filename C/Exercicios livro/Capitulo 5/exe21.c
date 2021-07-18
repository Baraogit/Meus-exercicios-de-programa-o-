21) Escreva um programa que leia certa quantidade de números, imprima o maior
deles e quantas vezes o maior número foi lido. A quantidade de números a serem
lidos deve ser fornecida pelo usuário.


#include <stdio.h>

int main(){

    int i = 0, qtoNumeros, numero, maiorNumero = 0, contMaiorNumero;

    printf("Digite a quantidade de numeros para digitacao: ");
    scanf("%d", &qtoNumeros);

    while (i < qtoNumeros){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero == maiorNumero)
            contMaiorNumero++;
        if (numero > maiorNumero){
            maiorNumero = numero;
            contMaiorNumero = 0;
            contMaiorNumero++;
        }
        i++;
    }
    printf("Maior numero digitado: %d e quantidade digitada: %d", maiorNumero, contMaiorNumero);

    return 0;
}

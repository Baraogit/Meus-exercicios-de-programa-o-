#include <stdio.h>

int main(){
    int  cont = 0, contPares = 0, somaNumerosDigitados = 0, somaPares = 0, maior, menor, numerosDigitados;
    float mediaGeral , mediaPares = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numerosDigitados);
    if (numerosDigitados != 0)
        maior = menor = numerosDigitados;

    while (numerosDigitados != 0){
        if (numerosDigitados > maior)
            maior = numerosDigitados;
        if (numerosDigitados < menor)
            menor = numerosDigitados;
        somaNumerosDigitados += numerosDigitados;
        cont++;
        if (numerosDigitados % 2 == 0){
            somaPares += numerosDigitados;
            contPares++;
        }
        printf("Digite um numero inteiro: ");
        scanf("%d", &numerosDigitados);
    }

    if (cont >= 1){
        mediaGeral = (float)somaNumerosDigitados / cont;
        mediaPares = (float)somaPares / contPares;

        printf("Soma dos numeros digitados = %d\n", somaNumerosDigitados);
        printf("Quantidades de numeros digitados = %d\n", cont);
        printf("Media dos numeros digitados = %f\n", mediaGeral);
        printf("Maior numero digitado = %d\n", maior);
        printf("Menor numero digitado = %d\n", menor);

        if (contPares >= 1)
        printf("Media dos numeros pares = %f\n", mediaPares);
    }
    return 0;
}

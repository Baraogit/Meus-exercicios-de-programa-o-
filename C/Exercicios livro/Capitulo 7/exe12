12) Escreva um programa que leia o nome e o valor de determinada mercadoria de
uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor
total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor
total, o valor do desconto e o valor a ser pago à vista

#include <stdio.h>
#include <string.h>
int main(){
    char nomeMercadoria[100];
    float precoDaMercadoria;

    printf("Digite um nome da mercadoria: ");
    gets(nomeMercadoria);
    printf("Digite o seu preco: ");
    scanf("%f", &precoDaMercadoria);
    printf("\n");
    printf("Valor a ser pago pela %s = %f\n", nomeMercadoria, precoDaMercadoria);
    printf("Valor do desconto a vista = 10%\n");
    printf("Valor a vista = %f\n",  precoDaMercadoria - (precoDaMercadoria * 10 / 100));
    return 0;
}

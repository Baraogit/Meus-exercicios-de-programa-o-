14) Crie uma enumeração representando os itens de uma lista de compras. Agora,
escreva um programa que leia um valor inteiro do teclado e exiba o nome do item
comprado e o seu preço

https://github.com/misaelrezende/Exercicios-do-Livro-Linguagem-C-Completa-e-Descomplicada/blob/master/Capitulo%208/ex14.c
Peguei daqui, por pura preguiça, mesmo. Porque a ideia de como resolver, eu já entendi...

#include <stdio.h>

enum Compra{farinha=1, fuba, macarrao, leite, cafe, arroz, acucar, biscoito,
            alho, palmito};

int main(){
    int numero;
    printf("Informe um numero entre 1 e 10: ");
    scanf("%d", &numero);
    if(numero == farinha)
        printf("farinha R$2,00\n");
    else if(numero == fuba)
        printf("fuba R$2,20\n");
    else if(numero == macarrao)
        printf("macarrao R$2,75\n");
    else if(numero == leite)
        printf("leite R$3,59\n");
    else if(numero == cafe)
        printf("cafe R$4,99\n");
    else if(numero == arroz)
        printf("arroz R$14,99\n");
    else if(numero == acucar)
        printf("acucar R$7,49\n");
    else if(numero == biscoito)
        printf("biscoito R$2,45\n");
    else if(numero == alho)
        printf("alho R$20,00\n");
    else if(numero == palmito)
        printf("palmito R$19,99\n");
    
    return 0;
}

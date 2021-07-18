18) Faça um programa que receba um número inteiro maior do que 1 e verifique se o
número fornecido é primo ou não.


#include <stdio.h>

int main()
{
    int i, numero, flag = 1; // flag(bandeira) recebe valor 1, ou seja, ele começa sendo verdadeiro, bandeira alta
    printf("Digite um valor inteiro maior que 1: ");
    scanf("%d", &numero);

    for (i = 2; i <= numero-1; i++){
        if (numero % i == 0){// se nesse intervalo de 2 até numero digitidado -1, houver uma divisão exata
            flag = 0;// a badeira está em posição baixa, ou seja, recebe 0 que equivale a falso
            break;
        }
    }
    if (flag == 1) // se a bandeira está alta(verdadeira)
        printf("%d eh primo", numero);// numero digitado é primo
    else
        printf("%d nao eh primo", numero); // flag recebeu 0, ou seja, é falso, logo o numero digitado não é primo

    return 0;
}
// por enquanto é isso, mas falta fazer alguns testes, procurando por falhas na lógica. 

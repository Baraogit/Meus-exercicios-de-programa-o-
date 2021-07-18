11) Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

#include <stdio.h>

int main()
{
    int  i, numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++){
        if (numero % i == 0)
            printf("%d\n", i);
    }
    return 0;
}
-------------------------------------
#include <stdio.h>

int main()
{
    int  i = 1, numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (i <= numero){
        if (numero % i == 0){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}

// se a variável i receber valor ZERO, de inicialização, o algoritmo não imprime os divisores.
//Ao usar o debug no code block, quando o programa chega na condição "if (numero % i == 0)", ocorre essa mensagem:  #0 0x40144d	main() (D:\Arquivos no HDD\c\teste\main.c:11)
//Resposta: ocorre um erro aritmético óbvio, não tem como dividir um  dividendo por um divisor de valor 0. 



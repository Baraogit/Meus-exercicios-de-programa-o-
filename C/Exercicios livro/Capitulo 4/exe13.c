13) Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma
das opções, e o seu programa pede dois valores numéricos e realiza a operação,
mostrando o resultado.

#include <stdio.h>

int main()
{
    char operadorAritmetico;
    short int a, b;
    
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    setbuf(stdin,NULL);
    
    printf("Cod.: +\n");
    printf("Cod.: -\n");
    printf("Cod.: /\n");
    printf("Cod.: *\n");
    printf("Escolha o seu operador aritmetico: ");
    operadorAritmetico = getchar();
    
    switch (operadorAritmetico){
        case '+':{
            short int soma = a + b;
            printf("%d + %d = %d\n", a, b, soma); break; 
        }  
        case '-':{
            short int subtracao = a - b;
            printf("%d - %d = %d\n", a, b, subtracao); break; 
        }
        case '/':{
            float divisao = a / b; 
            printf("%f / %f = %.2f\n", a, b, divisao); break;
        }
        case '*':{
            short int multiplicacao = a * b;
            printf("%d * %d = %d\n", a, b, multiplicacao); break;
        }
    }

    return 0;
}

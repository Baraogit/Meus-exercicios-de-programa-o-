1) Faça um programa que leia dois números e mostre qual deles é o maior.

#include <stdio.h>

int main()
{
    short int numero1, numero2;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &numero1, &numero2);
    
    if (numero1 != numero2){
        if (numero1 > numero2){
            printf("%d eh o maior\n", numero1);
        }
        else{
            printf("%d eh o maior\n", numero2);
        }
    }
    else{
        printf("Ambos são iguais\n");
    }
   
    return 0;
}
------------------------------------------------
//If e else somente com um comando, tornam as chaves optativas.
// mas são necessárias as chaves no último else, para vinculá-lo hierarquicamente ao primeiro if. 
// Retirei as chaves do else e funcionou perfeitamente. Isso deve talvez ao fato do segundo IF está subordinado ao primeiro ELSE
// sobrando para o primeiro IF o último(segundo) ELSE.
#include <stdio.h>

int main()
{
    short int numero1, numero2;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &numero1, &numero2);
    
    if (numero1 != numero2)
        if (numero1 > numero2)
            printf("%d eh o maior\n", numero1);
        else
            printf("%d eh o maior\n", numero2);
    else{
        printf("Ambos são iguais\n");
    }
   
    return 0;
}

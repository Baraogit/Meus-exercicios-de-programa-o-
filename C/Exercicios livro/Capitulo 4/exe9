9) Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre qual a classificação dessa pessoa.

                    ---------------Peso--------------------------
Altura             Até 60 --  Entre 60-90 (inclusive)  -- Acima de 90
Menor do que 1,20    A               D                       G
1,20-1,70            B               E                       H
Maior do que 1,70    C               F                       I

#include <stdio.h>

int main()
{
    float peso, altura; 
    
    printf("Digite sua altura e peso:\n");
    scanf("%f %f", &altura, &peso);
    
    if (altura < 1.20){ // se altura for menor que 1.20 m
        if (peso <= 60)
            printf("Classificacao A");
        else
            if (peso > 60 && peso <= 90)
                printf("Classificacao D");
            else
                printf("Classisicacao G");
    }else //se nao 
         if (altura >= 1.20 && altura <= 1.70){ //  se altura for entre 1.20 e 1.70
             if (peso < 60)
                 printf("Classificacao B");
            else
                if (peso > 60 && peso <= 90)
                    printf("Classificacao E");
                else
                    printf("Classificacao H");
         }
         else{ // se nao, se altura for mair que 1.70
            if (peso < 60)
                 printf("Classificacao C");
            else 
                if (peso >= 60 && peso <= 90)
                    printf("Classificacao F");
                else 
                    printf("Classificacao I");
         }
            
    return 0;
}

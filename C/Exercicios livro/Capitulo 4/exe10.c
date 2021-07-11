Faça um programa que leia três números inteiros positivos e efetue o cálculo de
uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir:

#include <stdio.h>
#include <math.h>

int main()
{
   float media, numero1, numero2, numero3;
   short int tipoDeMedia;
   
   
   printf("Digite 3 numeros para o calculo da media:\n");
   scanf("%f %f %f", &numero1, &numero2, &numero3);
   
   
   printf("Opcao 1 - Media Geometrica\n");
   printf("Opcao 2 - Media Ponderada\n");
   printf("Opcao 3 - Media Harmonica\n");
   printf("Opcao 4 - Media Aritimetica\n");
   printf("\n");
   printf("Digite a opcao = ");
   scanf("%d", &tipoDeMedia);
   
   switch (tipoDeMedia){
       case 1: media =  pow(numero1 * numero2 * numero3, 1.0/3.0);
       printf("Media Geometrica = %.2f\n", media);
               break;
        case 2: media = (numero1 + numero2 * 2 +  numero3 * 3 )/ 6;
        printf("Media Ponderada  = %.2f", media);
               break;
        case 3: media = 3 / (1 / numero1 + 1 / numero2 + 1 / numero3);
        printf("Media harmonica = %.2f", media);
               break;
        case 4: media = (numero1 + numero2 + numero3) / 3;
        printf("Media artimetica = %.2f", media);
               break;
   }
    return 0;
}

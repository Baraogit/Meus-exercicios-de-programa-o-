6) Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
 • Homens: (72,7 * h) – 58
 • Mulheres: (62,1 * h) – 44,7
 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    char sexo; 
    
    printf("digite sua altura: ");
    scanf("%f", &altura);
    setbuf(stdin,NULL);// limpa o buffer do teclado. Quando não se usa, o proximo scanf poderá usar a sujeira do buffer. Faça o teste com e sem setbuf
    printf("digite seu sexo (m/f): ");
    scanf("%c", &sexo); 
    
    if (sexo == 'm'){
        printf("Seu peso ideal = %.2f", (72.7 * altura) - 58);
    }
    else{
        if (sexo == 'f'){
            printf("Seu peso ideal = %.2f", (62.1 * altura) - 44.7);
        }
    }
  
    return 0;
}

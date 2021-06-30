4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores. 

#include <stdio.h>

int main()
{
   
    float nota1, nota2, nota3, nota4, media;
    printf("Digite as notas:\n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("Valor da media : %.2f", media);
    
    return 0;
}

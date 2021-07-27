1) Escreva uma função que, dado um número real passado como parâmetro, retorne
a parte inteira e a parte fracionária desse número por referência.

#include <stdio.h>

void divideNumero (float *num, int *inteiro, float *resto){
    *inteiro = *num;
    *resto = (*inteiro - *num) * -1; 
}

int main(){
    float numero, resto;
    int parteInteira;
    
    printf("Digite um numero ponto flutuante: ");
    scanf("%f", &numero); 
    
    divideNumero(&numero, &parteInteira, &resto);
    
    printf("Parte inteira =  %d\n", parteInteira);
    printf("Resto = %f\n", resto); 

    return 0;
}

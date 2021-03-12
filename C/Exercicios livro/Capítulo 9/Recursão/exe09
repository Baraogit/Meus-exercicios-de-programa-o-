9) Escreva uma função recursiva que receba um número inteiro positivo n. Calcule e
retorne o seu fatorial n!: n! = n * (n – 1) * (n – 2) * ... * 1

#include <stdio.h>

int calcularFatorial(int numero){
    if (numero == 0)
      return 1; 
    else
      return numero * calcularFatorial(numero - 1);
}

int main(){
    int numero;
    printf("Digite um numero para calcular seu fatorial: ");
    scanf("%d", &numero); 
    
   printf("Resultado = %d", calcularFatorial(numero) );

    return 0;
}

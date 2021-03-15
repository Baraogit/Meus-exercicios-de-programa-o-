10) Escreva uma função recursiva que receba um número inteiro, maior ou igual a zero, e retorne o enésimo termo da sequência de Fibonacci. Essa sequência começa
no termo de ordem zero e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. 
Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8,13, 21, 34.

#include <stdio.h>

int calcularFibonacci(int numero){
    if (numero == 0 || numero == 1)
        return numero; 
    else
       return calcularFibonacci(numero - 1) + calcularFibonacci(numero - 2);
}

int main(){
   int numero; 
   printf("Digite um valor: ");
   scanf("%d", &numero);
   
   printf("Resutado = %d", calcularFibonacci(numero)); 
   
   return 0; 
}

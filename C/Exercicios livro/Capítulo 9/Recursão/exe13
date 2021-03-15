13) Faça uma função recursiva que calcule o valor da série S descrita a seguir para um
valor n maior do que zero a ser fornecido como parâmetro para a mesma:

#include <stdio.h>

float calcularSerieS(float numero){
    if (numero == 1)
      return numero; 
    else
      return (1 + numero * numero) / numero + calcularSerieS(numero - 1); 
}

int main(){
   float numero; 
   printf("Digite um valor: ");
   scanf("%f", &numero);
   
   printf("Resutado = %f", calcularSerieS(numero)); 
   
   return 0; 
}

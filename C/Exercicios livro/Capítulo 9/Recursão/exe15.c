15) Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:

#include <stdio.h>
 
float calcularSerieHarmonica(float n){
    if (n == 0)
       return n; 
    else
       return 1 / n + calcularSerieHarmonica(n - 1); 
}

int main(){
   float n; 
   printf("Digite um valor: ");
   scanf("%f", &n);
   
   printf("Resutado = %f", calcularSerieHarmonica(n)); 
   
   return 0; 
}

14) Crie uma função recursiva que retorne o menor elemento em um vetor.

#include <stdio.h>

int imprimeMenorValor(int *vetor, int n, int menor){; 
    if (n == 0)
       return;
    else{
        if (menor > vetor[n]){
            menor = vetor[n];
            return menor;
        }
        imprimeMenorValor(vetor, n - 1, menor);
    }
}

int main(){
   int n, i, menor; 
   printf("Digite quantos valores terá o vetor: ");
   scanf("%d", &n);
   int vetor[n]; 
    
   
   printf("Digite %d valores:\n", n);
   for (i = 0; i < n; i++){
       scanf("%d", &vetor[i]);
   }
   
   menor = vetor[0];
   printf("Menor valor = %d", imprimeMenorValor(vetor, n - 1, menor)); 
   
   return 0; 
}

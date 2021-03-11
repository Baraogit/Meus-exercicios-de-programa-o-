 5) Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.
 https://www.youtube.com/watch?v=XSqzJ7iEXbE
 
#include <stdio.h>

void lerVetor (int *vetor, int n){
    int i;
    printf("Digite os valores:\n");
    for (i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
}

int somarElementosVetor (int *vetor, int n){
    if (n == 0)
       return 0;
    else
      return vetor[n - 1] + somarElementosVetor(vetor, n - 1); 
}

int main(){
    int n; 
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    int vetor[n]; 
    
    lerVetor(vetor, n);
    
    printf("Resultado = %d", somarElementosVetor(vetor, n));

    return 0;
}
 ------------------------------------------------------------------------------------------
 Minha tentativa!
 #include <stdio.h>


int somarElementosVetor(int *vetor, int n, int *somar){
    
    if (n == 0)
       return vetor;
    else{
        *somar += vetor[n];
         somarElementosVetor(vetor, n - 1, &somar);
         
    }
}

int main(){
    int n, i, resultado, somar = 0; 
    printf("Informe quantos elementos terao o vetor: ");
    scanf("%d", &n); 
    int vetor[n];
    
    printf("Informe os valores do vetor:\n");
    for (i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
   somarElementosVetor(vetor, n - 1, &somar);
    
    printf("Resultado = %d", somar);
    

    return 0;
}

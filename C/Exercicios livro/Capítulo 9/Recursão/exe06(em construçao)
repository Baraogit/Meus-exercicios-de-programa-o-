 6) Crie uma função recursiva que retorne a média dos elementos de um vetor de
inteiros.

#include <stdio.h>

void lerVetor(float *vetor, int n){
  int i;
  for (i = 0; i < n; i++){
    scanf("%f", &vetor[i]);
  }
}

float calcularMedia(float *vetor, int n){
  int soma, media;
  if (n == 0)
     return 0;
  else{
    media = soma / n;
    soma = vetor[n - 1] + calcularMedia(vetor, n - 1);
    return media;
  }

}

int main(){
  int indiceVetor;
  printf("Diga quantos elementos tera o vetor: ");
  scanf("%d", &indiceVetor);
  float vetor[indiceVetor];

  lerVetor(vetor, indiceVetor);

  printf("Media = %f", calcularMedia(vetor, indiceVetor));
   return 0;
}

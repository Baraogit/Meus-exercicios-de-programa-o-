 5) Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
 Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor deverá ser maior ou igual a 2. 
 Esse vetor deverá ser alocado dinamicamente.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
  int n, i;

  do{
    printf("Digite um valor: ");
    scanf("%d", &n);
  }while (n <= 0);

  int *vetor_ponteiro = malloc(n * sizeof(int));
  printf("Digite os valores do vetor.\n");
  for (i = 0; i < n; i++){
    scanf("%d", (vetor_ponteiro + i));
    if (*(vetor_ponteiro + i) < 2){
      printf("ERRO!Voce digitou um valor menor que 2. Digite novamente:\n");
      i -= 1;
      continue;
    }
  }
  printf("Valores digitados: ");
  for (i = 0; i < n; i++){
    printf("%d ", *(vetor_ponteiro + i));
  }

  free(vetor_ponteiro);
  vetor_ponteiro = NULL;

   return 0;
}

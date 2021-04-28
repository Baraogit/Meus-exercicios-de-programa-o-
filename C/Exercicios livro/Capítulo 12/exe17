17) Elabore um programa que leia um arquivo binário contendo 100 números. Mostre na tela a soma desses números.


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  FILE *arquivo = fopen("100_numeros.txt", "rb");
  if (arquivo == NULL){
    perror("Erro: ");
    exit(1);
  }

  int i, vetor[100], tamanho_vetor, soma = 0;

  fread(&tamanho_vetor, sizeof(int), 1, arquivo);
  fread(vetor, sizeof(int), tamanho_vetor, arquivo);

  for (i = 0; i < 100; i++){
    soma += vetor[i];
  }

  printf("Soma = %d", soma);

  fclose(arquivo);

  return 0;
}

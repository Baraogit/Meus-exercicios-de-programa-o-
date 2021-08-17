16) Faça um programa que leia 100 números. Esse programa deverá, em seguida,
armazenar esses números em um arquivo binário.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  FILE *arquivo = fopen("100_numeros.txt", "wb");
  if (arquivo == NULL){
    perror("Erro: ");
    exit(1);
  }

  int i, vetor[100], tamanho_vetor = 100;
  for (i = 0; i < 100; i++){//0 até 99
    vetor[i] = i;
  }
  
  fwrite(&tamanho_vetor, sizeof(int), 1, arquivo);//grava antes o tamanho do vetor
  fwrite(vetor, sizeof(int), tamanho_vetor, arquivo);
  
  fclose(arquivo);

  return 0;
}

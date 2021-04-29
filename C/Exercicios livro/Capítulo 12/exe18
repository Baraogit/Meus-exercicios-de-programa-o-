18) Crie um programa que leia um arquivo binário contendo uma quantidade qualquer de números. O primeiro número lido indica quantos valores existem no
arquivo. Mostre na tela o maior e o menor valor lido.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  FILE *arquivo = fopen("arquivo_para_leitura.txt", "rb");
  if (arquivo == NULL){
    perror("Erro na abertura: ");
    exit(1);
  }

  int i, quantidade_numero, numero, maior, menor;
  fscanf(arquivo, "%d", &quantidade_numero);
  fscanf(arquivo, "%d", &numero);

  maior = menor = numero;

  for (i = 0; i < quantidade_numero; i++){
    if (numero > maior)
       maior = numero;

    if (numero < menor)
       menor = numero;
    fscanf(arquivo, "%d", &numero);
  }
  fclose(arquivo);

  printf("Maior = %d\nMenor = %d", maior, menor);

  return 0;
}

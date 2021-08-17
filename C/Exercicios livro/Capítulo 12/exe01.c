1) Escreva um programa que leia do usuário o nome de um arquivo texto. Em seguida, mostre na tela quantas linhas esse arquivo possui.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
  char nome_do_arquivo[50], caractere;
  int contador;

  printf("Digite o nome do arquivo: ");
  scanf("%s", nome_do_arquivo);
  FILE *ponteiro_para_arquivo = fopen(nome_do_arquivo, "r");

  if (ponteiro_para_arquivo == NULL){
    perror("Erro na abertura do arquivo: ");
    exit(1);
  }
  while (!feof(ponteiro_para_arquivo)){
    caractere = fgetc(ponteiro_para_arquivo);
    if (caractere == 10)
      contador++;
  }

  printf("Numero de linhas do arquivo: ", contador);
  
  fclose(ponteiro_para_arquivo); 


  return 0;

}

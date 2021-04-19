3) Escreva um programa para converter o conteúdo de um arquivo texto em caracteres maiúsculos. 
O programa deverá ler do usuário o nome do arquivo a ser convertido e o nome do arquivo a ser salvo.

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
  char nome_arquivo_char_minuscula[100], nome_arquivo_char_converter_maiuscula[100];
  char caractere;

  printf("Digite o nome do arquivo com caracteres minusculos: ");
  scanf("%s", nome_arquivo_char_minuscula);
  FILE *ponteiro_para_arquivo_char_minuscula = fopen(nome_arquivo_char_minuscula, "r");
  if (ponteiro_para_arquivo_char_minuscula == NULL){
    perror("Erro na abertura do arquivo: ");
    exit(1);
  }

  printf("Digite o nome do arquivo para converter os caracartes para maiusculas: ");
  scanf("%s", nome_arquivo_char_converter_maiuscula);
  FILE *ponteiro_para_arquivo_converter_maiuscula = fopen(nome_arquivo_char_converter_maiuscula, "w");
  if (ponteiro_para_arquivo_converter_maiuscula == NULL){
    perror("Erro na abertura do arquivo: ");
    exit(1);
  }

  caractere = fgetc(ponteiro_para_arquivo_char_minuscula);
  while(1){
    if (feof(ponteiro_para_arquivo_char_minuscula))
      break;
    fputc(toupper(caractere), ponteiro_para_arquivo_converter_maiuscula);
    caractere = fgetc(ponteiro_para_arquivo_char_minuscula);
  }

  fclose(ponteiro_para_arquivo_char_minuscula);
  fclose(ponteiro_para_arquivo_converter_maiuscula);

  return 0;
}

Ler um arquivo com algum conteúdo e passar esse conteúdo para outro arquivo, usando caractere por caractere.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  FILE *arquivo_leitura_caractere = fopen("leitura_caractere.txt", "r");
  if (arquivo_leitura_caractere == NULL){
    perror("Falha: ");
    exit(1);
  }
  FILE *arquivo_escrita_caractere = fopen("escrita_caractere.txt", "w");
  if (arquivo_escrita_caractere == NULL){
    perror("Falha: ");
    exit(1);
  }
  char caractere;

  caractere = fgetc(arquivo_leitura_caractere);
  while(caractere != EOF){
    fputc(caractere, arquivo_escrita_caractere);
    caractere = fgetc(arquivo_leitura_caractere);
  }

  fclose(arquivo_leitura_caractere);
  fclose(arquivo_escrita_caractere);


  return 0;
}

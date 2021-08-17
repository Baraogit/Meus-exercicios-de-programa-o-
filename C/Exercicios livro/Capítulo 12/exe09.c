9) Escreva uma função que receba como parâmetro o nome de um arquivo texto e
retorne quantas vogais esse arquivo possui.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int descobrirVogais(char *nome_arquivo){
  int numero_de_vogais = 0;
  FILE *arquivo = fopen(nome_arquivo, "r");
  if (arquivo == NULL){
    perror("Falha na abertura do arquivo: ");
    exit(1);
  }
  char caractere = fgetc(arquivo);
  while(caractere != EOF){
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
    caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U' )
       numero_de_vogais++;
    caractere = fgetc(arquivo);
  }
  fclose(arquivo);

  return numero_de_vogais;
}

int main(){
  char nome_arquivo[100];

  printf("Digite o nome do arquivo: ");
  scanf("%s", nome_arquivo);

  printf("numero de vogais = %d", descobrirVogais(nome_arquivo));

  return 0;
}


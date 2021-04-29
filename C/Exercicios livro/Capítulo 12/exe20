20) Considerando a estrutura atleta do exercício anterior, escreva um programa que
leia um arquivo binário contendo os dados de cinco atletas. Calcule e exiba o
nome do atleta mais alto e do mais velho.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct atleta{
  char nome[50], esporte[50];
  int idade;
  float altura;
} atleta[3];


int main(){
  FILE *arquivo = fopen("atleta.txt", "rb");
  if (arquivo == NULL){
    perror("Erro na abertura: ");
    exit(1);
  }

  fread(atleta, sizeof(struct atleta), 3, arquivo);

  int i, indice_atleta_mais_alto = 0, atleta_mais_velho, indice_atleta_mais_velho = 0;
  float atleta_mais_alto;

  atleta_mais_alto = atleta[0].altura;
  atleta_mais_velho = atleta[0].idade;

  for(i = 0; i < 3; i++){

    if (atleta_mais_alto < atleta[i].altura){
      atleta_mais_alto = atleta[i].altura;
      indice_atleta_mais_alto = i;
    }

    if (atleta_mais_velho < atleta[i].idade){
      atleta_mais_velho = atleta[i].idade;
      indice_atleta_mais_velho = i;
    }

  }

  printf("Atleta mais alto = %s\n", atleta[indice_atleta_mais_alto].nome);
  printf("Atleta mais velho = %s\n", atleta[indice_atleta_mais_velho].nome);

  fclose(arquivo);

  return 0;
}

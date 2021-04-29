19) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas e os armazene em um arquivo binário.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct atleta{
  char nome[50], esporte[50];
  int idade;
  float altura;
} atleta[3];

void retirarQuebraDeLinha(char *string){
  int i;
  for (i = 0; i < strlen(string); i++){
    if (string[i] == '\n')
       string[i] = '\0';
  }
}

void cadastrarDadosAtleta(struct atleta *atleta, int indice){
  int i;
  for (i = 0; i < indice; i++){
    printf("Atleta %d\n", i+1);

    printf("Digite o nome: ");
    fgets(atleta[i].nome, 50, stdin);
    retirarQuebraDeLinha(atleta[i].nome);

    printf("Digite o esporte: ");
    fgets(atleta[i].esporte, 50, stdin);
    retirarQuebraDeLinha(atleta[i].esporte);

    printf("Digite a idade: ");
    scanf("%d", &atleta[i].idade);

    printf("Digite a altura: ");
    scanf("%f", &atleta[i].altura);
    setbuf(stdin, NULL);

  }

}

int main(){
  cadastrarDadosAtleta(atleta, 3);
  FILE *arquivo = fopen("atleta.txt", "wb");
  if (arquivo == NULL){
    perror("Erro na abertura: ");
    exit(1);
  }

  fwrite(atleta, sizeof(struct atleta), 3, arquivo);
  fclose(arquivo);

  return 0;
}

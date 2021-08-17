 8) Dado um arquivo contendo um conjunto de nomes e datas de nascimento (dia, mês e ano, isto é, três inteiros seguidos),
 escrever um programa que leia esse arquivo e a data atual e gere outro arquivo contendo o nome e a idade.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  FILE *arquivo_para_leitura = fopen("arquivo_para_leitura.txt", "r");
  if (arquivo_para_leitura == NULL){
    perror("Erro na abertura do arquivo: ");
    exit(1);
  }

  FILE *arquivo_para_escrita = fopen("idades.txt", "w");
  if (arquivo_para_escrita == NULL){
    perror("Erro na abertura do arquivo: ");
    exit(1);
  }

  int  dia_atual, mes_atual, ano_atual, idade;
  int  dia_arquivo, mes_arquivo, ano_arquivo;
  char nome_arquivo[100];

  printf("Digite o dia, mes e ano: ");
  scanf("%d %d %d", &dia_atual, &mes_atual, &ano_atual);

  while(1){
    fscanf(arquivo_para_leitura,"%s %d %d %d", nome_arquivo, &dia_arquivo, &mes_arquivo, &ano_arquivo);
    if (feof(arquivo_para_leitura))
      break;
    idade = ano_atual - ano_arquivo;
    if (mes_atual < mes_arquivo)
      idade--;
    else
      if (mes_atual == mes_arquivo && dia_atual > dia_arquivo)
        idade--;
    fprintf(arquivo_para_escrita, "Nome: %s Idade : %d\n", nome_arquivo, idade);
  }

  fclose(arquivo_para_leitura);
  fclose(arquivo_para_escrita);

  return 0;
}

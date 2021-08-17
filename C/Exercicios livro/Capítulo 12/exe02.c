2) Escreva um programa que leia do usuário os nomes de dois arquivos texto.
Crie um terceiro arquivo texto com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo).


#include <stdlib.h>
#include <stdio.h>

int main(){
  char nome_arquivo1[50], nome_arquivo2[50], string1[100], string2[100];
  printf("Digite o nome do arquivo1: ");
  scanf("%s", nome_arquivo1);
  printf("Digite o nome do arquivo2: ");
  scanf("%s", nome_arquivo2);

  FILE *ponteiro_para_arquivo1 = fopen(nome_arquivo1, "r"); //abre um "arquivo existente" para leitura
  FILE *ponteiro_para_arquivo2 = fopen(nome_arquivo2, "r"); //abre um "arquivo existeente" para leitura
  FILE *ponteiro_para_arquivo3 = fopen("C:\\Users\\will0\\Desktop\\Temporarios\\c\\arquivo3.txt", "w"); // cria um arquivo para escrita
  if (ponteiro_para_arquivo1 == NULL || ponteiro_para_arquivo2 == NULL || ponteiro_para_arquivo3 == NULL){
    perror("Erro na abertura do arquivo: ");
    exit(1);
  }

  fgets(string1, 100, ponteiro_para_arquivo1);// copia a primeira linha do arquivo1 para o buffer(string1)
  while(1){                                   // copia até achar o fim da string ou uma quebra de linha ("\n") = o fim da primeia linha
    if(feof(ponteiro_para_arquivo1))//se encontrar a constante EOF(final do arquivo)
      break;//sai do loop
    fprintf(ponteiro_para_arquivo3, "%s", string1);// se não, o que estiver no buffer, é copiado para o arquivo3
    fgets(string1, 100, ponteiro_para_arquivo1);// copia a segunda linha do arquivo1 para o buffer
  }

  fgets(string2, 100, ponteiro_para_arquivo2);
  while(1){
    if(feof(ponteiro_para_arquivo2))
      break;
      fprintf(ponteiro_para_arquivo3, "%s", string2);
  }

  fclose(ponteiro_para_arquivo1);
  fclose(ponteiro_para_arquivo2);
  fclose(ponteiro_para_arquivo3);

  return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------
#include <stdlib.h>
#include <stdio.h>

int main(){
  char nome_arquivo1[50], nome_arquivo2[50];
  char caractere_do_arquivo;
  printf("Digite o nome do arquivo1: ");
  scanf("%s", nome_arquivo1);
  printf("Digite o nome do arquivo2: ");
  scanf("%s", nome_arquivo2);

  FILE *ponteiro_para_arquivo1 = fopen(nome_arquivo1, "r");
  FILE *ponteiro_para_arquivo2 = fopen(nome_arquivo2, "r");
  FILE *ponteiro_para_arquivo3 = fopen("nome_arquivo3", "w");
  if (ponteiro_para_arquivo1 == NULL || ponteiro_para_arquivo2 == NULL || ponteiro_para_arquivo3 == NULL){
    perror("Erro na abertura do arquivo: ");
    exit(1);
  }
  caractere_do_arquivo = fgetc(ponteiro_para_arquivo1);
  while(1){
    if (feof(ponteiro_para_arquivo1))
      break;
    fputc(caractere_do_arquivo, ponteiro_para_arquivo3);
    caractere_do_arquivo = fgetc(ponteiro_para_arquivo1);
  }

  caractere_do_arquivo = fgetc(ponteiro_para_arquivo2);
  while(1){
    if (feof(ponteiro_para_arquivo2))
       break;
    fputc(caractere_do_arquivo, ponteiro_para_arquivo3);
    caractere_do_arquivo = fgetc(ponteiro_para_arquivo2);
  }

  fclose(ponteiro_para_arquivo1);
  fclose(ponteiro_para_arquivo2);
  fclose(ponteiro_para_arquivo3);

  return 0;
}

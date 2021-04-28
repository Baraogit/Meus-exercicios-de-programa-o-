14) Crie um programa para calcular e exibir o número de palavras contido em um
arquivo texto. O usuário deverá informar o nome do arquivo.

Usando fgets (strings)

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  char nome_do_arquivo[50];
  printf("Digite o nome do arquivo: ");
  scanf("%s", nome_do_arquivo);
  FILE *arquivo = fopen(nome_do_arquivo,"r");
  if (arquivo == NULL){
    perror("Erro na abertura: ");
    exit(1);
  }

  
  char string[200];
  int i, conta_string = 0;

  while(1){
    fgets(string, 200, arquivo);

    if(feof(arquivo))
      break;

    for (i = 0; i < strlen(string); i++){
      if (string[i] == 10 || string[i] == 32) // 10 == '\0'  32 == espaço(' ')
        conta_string++;
    }
  }
  
  fclose(arquivo);
  printf("Quantidades de string = %d", conta_string);

  return 0;
}
------------------------------------------------------
Usando fgtec(caractere)


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  char nome_do_arquivo[50];
  printf("Digite o nome do arquivo: ");
  scanf("%s", nome_do_arquivo);
  FILE *arquivo = fopen(nome_do_arquivo,"r");
  if (arquivo == NULL){
    perror("Erro na abertura: ");
    exit(1);
  }


  char caractere;
  int i, conta_string = 0;

 caractere = fgetc(arquivo);
  while (caractere != EOF){
    if (caractere == 10 || caractere == 32) // 10 == '\0'  32 == espaço(' ')
       conta_string++;
    caractere = fgetc(arquivo);
  }

  fclose(arquivo);
  printf("Quantidades de string = %d", conta_string);

  return 0;
}

---------------------------------------------------

Usando fscanf(dados formatados)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  char nome_do_arquivo[50];
  printf("Digite o nome do arquivo: ");
  scanf("%s", nome_do_arquivo);
  FILE *arquivo = fopen(nome_do_arquivo,"r");
  if (arquivo == NULL){
    perror("Erro na abertura: ");
    exit(1);
  }

  char string[200];
  int conta_string = 0;

  while(1){
    fscanf(arquivo, "%s", string);

    if(feof(arquivo))
      break;

    conta_string++;
  }



  fclose(arquivo);
  printf("Quantidades de string = %d", conta_string);

  return 0;
}

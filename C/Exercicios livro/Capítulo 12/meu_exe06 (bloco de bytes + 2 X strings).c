Mesmo que meu_exe05, mas com duas strings para escrever e ler.

ESCREVENDO: 

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  FILE *arquivo_para_bloco_bytes = fopen("bloco_de_bytes.txt", "wb");
  if (arquivo_para_bloco_bytes == NULL){
    perror("Erro na abertura");
    exit(1);
  }

  char string[100] = "willkimen";
  char string2[100] = "cavalcanti";
  int tamanho_string_buffer = strlen(string);
  int tamanho_string_buffer2 = strlen(string2);

  fwrite(&tamanho_string_buffer, sizeof(int), 1, arquivo_para_bloco_bytes);
  fwrite(&tamanho_string_buffer2, sizeof(int), 1, arquivo_para_bloco_bytes);
  fwrite(string, sizeof(char), strlen(string), arquivo_para_bloco_bytes);
  fwrite(string2, sizeof(char), strlen(string2), arquivo_para_bloco_bytes);

  fclose(arquivo_para_bloco_bytes);

  return 0;
}
--------------------------------------------------------------------------
LENDO: 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  FILE *arquivo_para_bloco_bytes = fopen("bloco_de_bytes.txt", "rb");
  if (arquivo_para_bloco_bytes == NULL){
    perror("Erro na abertura");
    exit(1);
  }

  char string_buffer[100];
  char string_buffer2[100];
  int tamanho_string_buffer;
  int tamanho_string_buffer2;

  fread(&tamanho_string_buffer, sizeof(int), 1, arquivo_para_bloco_bytes);
  fread(&tamanho_string_buffer2, sizeof(int), 1, arquivo_para_bloco_bytes);
  fread(string_buffer, sizeof(char), tamanho_string_buffer, arquivo_para_bloco_bytes);
  fread(string_buffer2, sizeof(char), tamanho_string_buffer2, arquivo_para_bloco_bytes);

  string_buffer[tamanho_string_buffer] = '\0';
  string_buffer2[tamanho_string_buffer2] = '\0';

  printf("%s", string_buffer);
  printf("%s", string_buffer2);

  fclose(arquivo_para_bloco_bytes);

  return 0;
}
-------------------------------------------------------------------------------------
OS DOIS JUNTOS:
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  FILE *arquivo_para_bloco_bytes = fopen("bloco_de_bytes.txt", "wb");
  if (arquivo_para_bloco_bytes == NULL){
    perror("Erro na abertura");
    exit(1);
  }

  char string[100] = "willkimen";
  char string2[100] = "cavalcanti";
  int tamanho_string_buffer = strlen(string);
  int tamanho_string_buffer2 = strlen(string2);

  fwrite(&tamanho_string_buffer, sizeof(int), 1, arquivo_para_bloco_bytes);
  fwrite(&tamanho_string_buffer2, sizeof(int), 1, arquivo_para_bloco_bytes);
  fwrite(string, sizeof(char), strlen(string), arquivo_para_bloco_bytes);
  fwrite(string2, sizeof(char), strlen(string2), arquivo_para_bloco_bytes);

  fclose(arquivo_para_bloco_bytes);


  arquivo_para_bloco_bytes = fopen("bloco_de_bytes.txt", "rb");
  if (arquivo_para_bloco_bytes == NULL){
    perror("Erro na abertura");
    exit(1);
  }

  char string_buffer[100];
  char string_buffer2[100];


  fread(&tamanho_string_buffer, sizeof(int), 1, arquivo_para_bloco_bytes);
  fread(&tamanho_string_buffer2, sizeof(int), 1, arquivo_para_bloco_bytes);
  fread(string_buffer, sizeof(char), tamanho_string_buffer, arquivo_para_bloco_bytes);
  fread(string_buffer2, sizeof(char), tamanho_string_buffer2, arquivo_para_bloco_bytes);

  string_buffer[tamanho_string_buffer] = '\0';
  string_buffer2[tamanho_string_buffer2] = '\0';

  printf("%s", string_buffer);
  printf("%s", string_buffer2);

  fclose(arquivo_para_bloco_bytes);

  return 0;
}

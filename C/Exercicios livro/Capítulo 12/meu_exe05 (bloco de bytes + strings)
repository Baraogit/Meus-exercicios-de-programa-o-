Grave em um arquivo-binário uma string, depois leia essa string. Retire o tamanho da string, para fazer sua leitura. 

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
  int tamanho_string = strlen(string);
  fwrite(&tamanho_string, sizeof(int), 1, arquivo_para_bloco_bytes);
  fwrite(string, sizeof(char), strlen(string), arquivo_para_bloco_bytes);

  fclose(arquivo_para_bloco_bytes);

  return 0;
}

-------------------------------------------------------------------------------
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

  int tamanho_string_buffer;
  char string_buffer[100];

  fread(&tamanho_string_buffer, sizeof(int), 1, arquivo_para_bloco_bytes);
  fread(string_buffer, sizeof(char), tamanho_string_buffer, arquivo_para_bloco_bytes);
  string_buffer[tamanho_string_buffer] = '\0';
  printf("%s", string_buffer);

  fclose(arquivo_para_bloco_bytes);

  return 0;
}

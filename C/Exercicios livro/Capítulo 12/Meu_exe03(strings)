Escreva 3 strings, cada uma em uma linha e salve em um arquivo. Depois leia esse arquivo e verifique se para de ler na primeira linha. 
Verificado: para na primeira linha. Para ler as três, precisa usar um loop e ir lendo em cade loop, uma linha.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  FILE *arquivo_tres_strings = fopen("tres_strings.txt", "w");
  if (arquivo_tres_strings == NULL){
    perror("Falha: ");
    exit(1);
  }
  char string[100];
  int i;

  for (i = 0; i < 3; i++){
    printf("Digite a string %d: ", 1+i);
    fgets(string, 100, stdin);
    setbuf(stdin, NULL);
    fputs(string, arquivo_tres_strings);
  }
  fclose(arquivo_tres_strings);

  //leitura do arquivo
  arquivo_tres_strings = fopen("tres_strings.txt", "r");
  if (arquivo_tres_strings == NULL){
    perror("Falha: ");
    exit(1);
  }
  fgets(string, 100, arquivo_tres_strings);
  printf("Leitura: %s", string);

  fclose(arquivo_tres_strings);

  return 0;
}

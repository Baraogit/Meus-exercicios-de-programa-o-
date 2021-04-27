12) Escreva uma função que receba um vetor e seu tamanho como parâmetros e salve-a em um arquivo texto de nome “vetor.txt”. 
Cada valor do vetor deve ser salvo em uma linha do arquivo.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void alimentarVetor(int *vetor,int indice_vetor){
  FILE *arquivo_vetor = fopen("vetor.txt", "w");
  if (arquivo_vetor == NULL){
    perror("Erro na abertura: ");
    exit(1);
  }
  int i;
  for (i = 0; i < indice_vetor; i++){
    scanf("%d", &vetor[i]);
    fprintf(arquivo_vetor, "Indice[%d] = %d\n", i, vetor[i]);
  }
  fclose(arquivo_vetor);

}

int main(){
  int vetor[10], indice_vetor = 10;
  alimentarVetor(vetor, indice_vetor);

  return 0;
}

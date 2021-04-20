5) Faça um programa que leia números positivos e os converta em binário. Cada número binário deverá ser salvo em uma linha de um arquivo texto. 
O programa termina quando o usuário digitar um número negativo.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
  int i, decimal_positivo, clone_decimal_positivo, indice_Vetor_binario = 0;
  FILE *arquivo = fopen ("numeros_binario.txt", "w");
  if (arquivo == NULL){
    perror("Erro na abertura do arquivo: ");
    exit(1);
  }

  while (1){
    printf("Digite um inteiro: ");
    scanf("%d", &decimal_positivo);

    if (decimal_positivo < 0)
       break;

    clone_decimal_positivo = decimal_positivo;

    for(clone_decimal_positivo; clone_decimal_positivo > 0; clone_decimal_positivo /= 2){
      indice_Vetor_binario++; // conta quantos loops houveram, a quantidade será a qto do array
    }

    int vetor_de_binario[indice_Vetor_binario];
    for(i = indice_Vetor_binario - 1, decimal_positivo; decimal_positivo > 0; decimal_positivo /= 2, i--){
      vetor_de_binario[i] = decimal_positivo % 2; // o array começa de tras para frente, pois sequencia
    }                          // de 0 e 1, também fica de trás para frente
    for (i = 0 ; i < indice_Vetor_binario; i++){
      fprintf(arquivo, "%d", vetor_de_binario[i]);
    }
    indice_Vetor_binario = 0;
    fprintf(arquivo, "%c", '\n');

  }
  fclose(arquivo);


  return 0;
}

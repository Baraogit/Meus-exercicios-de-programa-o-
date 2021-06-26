#include <stdio.h>
#include <stdlib.h>

void pesquisa_binaria(int *array, int indice, int numeroPesquisado){
  int comeco = 0, final = indice, meio, flag = 0;

  while (comeco <= final && flag == 0){
    meio = (comeco + final) / 2;
    if (numeroPesquisado == array[meio])
       flag = 1;
    else
       if (numeroPesquisado < array[meio])
          final = meio - 1;
       else
          comeco = meio + 1;
  }
  if (flag == 1)
     printf("%d foi encontrado na posicao %d", numeroPesquisado, meio);
  else
     printf("%d nao esta no array", numeroPesquisado);
}

int main(){
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  int numeroPesquisado;
  printf("Digite um valor a ser pesquisado: ");
  scanf("%d", &numeroPesquisado);

  pesquisa_binaria(array, 10 - 1, numeroPesquisado);

  return 0;
}

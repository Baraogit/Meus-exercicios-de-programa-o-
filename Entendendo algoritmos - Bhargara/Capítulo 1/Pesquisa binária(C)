#include <stdio.h>
#include <stdlib.h>

void pesquisa_binaria (int *array, int indice, int numero){
  int baixo = 0, alto = indice - 1, meio, chute;

  while (baixo <= alto){
    meio = (baixo + alto) / 2;
    chute = array[meio];
    if (chute == numero)
      break;
    if (chute > numero)
        alto = meio - 1;
    else
       baixo = meio + 1;
  }
  if (chute == numero)
      printf("%d foi achado na posicao %d", numero, meio);
  else
     printf("%d nao esta no array", numero);
}

int main(){
    int numero;
    int array[5] = {1, 3, 5, 7, 9};
    printf("Digite um numero para verificar se esta no array: ");
    scanf("%d", &numero);

    pesquisa_binaria(array, 5, numero);

  return 0;
}

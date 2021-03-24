#include <stdio.h>
#include <stdlib.h>

void pesquisa_binaria( int numero){
  int comeco = 1, final = 100, meio, flag = 0;

  while (comeco <= final && flag == 0){
    meio = (comeco + final) / 2;
    if (numero == meio)
       flag = 1;
    else
       if (numero < meio)
          final = meio - 1;
       else
          comeco = meio + 1;
  }
  if (flag == 1)
     printf("%d foi encontrado", numero);
  else
     printf("%d nao foi encontrado", numero);

}

int main(){
  int numero;
  printf("Digite um valor a ser pesquisado: ");
  scanf("%d", &numero);

  pesquisa_binaria(numero);

  return 0;
}

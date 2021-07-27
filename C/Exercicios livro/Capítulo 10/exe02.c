2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

#include <stdio.h>
#include <stdlib.h>
int main(){
  int variavel1, variavel2;
  int *ponteiro1, *ponteiro2;

  ponteiro1 = &variavel1;
  ponteiro2 = &variavel2;

  printf("Digite dois valores: ");
  scanf("%d %d", &variavel1, &variavel2);

  if (ponteiro1 > ponteiro2)
     printf("Valor da variavel1 = %d", *ponteiro1);
  else
     printf("Valor da variavel2 = %d", *ponteiro2);

 return 0;
}

---------------------------------------------------------------------------------------------------------
Sem usar ponteiros!
#include <stdio.h>
#include <stdlib.h>
int main(){
  int variavel1, variavel2;

  printf("Digite dois valores: ");
  scanf("%d %d", &variavel1, &variavel2);

  if (&variavel1 > &variavel2)
     printf("Valor da variavel1 = %d", variavel1);
  else
     printf("Valor da variavel2 = %d", variavel2);
  
 return 0;
}

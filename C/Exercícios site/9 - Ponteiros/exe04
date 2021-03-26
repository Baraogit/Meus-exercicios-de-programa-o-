#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocarValores(int valor1, int valor2){
  int troca, *ponteiro1 = &valor1, *ponteiro2 = &valor2;

  troca = valor1;
  valor1 = valor2;
  valor2 = troca;

  printf("Valor 1 = %d\n", *ponteiro1);
  printf("Valor 2 = %d\n", *ponteiro2);

}

int main(){
   int valor1, valor2;

   printf("Digite dois valores\n");
   scanf("%d %d", &valor1, &valor2);

   trocarValores(valor1, valor2);
 return 0;
}

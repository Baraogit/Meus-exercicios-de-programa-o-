10) Considere a seguinte declaração: int a,*b,**c,***d. Escreva um programa que leia
a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
triplo, e d, o quádruplo

#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, *b, **c, ***d;

  printf("Digite um valor: ");
  scanf("%d", &a);

  b = &a;
  c = &b;
  d = &c;

  *b *= 2;
  printf("Ponteiro *B apontando para A = %d\n", *b);
  **c *= 3;
  printf("Ponteiro **C apontando para A = %d\n", **c);
  ***d *= 4;
  printf("Ponteiro ***D apontando para A = %d\n", ***d);

 return 0;
}

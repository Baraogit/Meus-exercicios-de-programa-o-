1) Escreva um programa que mostre o tamanho em byte que cada tipo de dados
ocupa na memória: char, int, float, double.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main(){
  printf("short int = %d\n", sizeof(short int));
  printf("int = %d\n", sizeof(int));
  printf("long int = %d\n", sizeof(long int));
  printf("long long int = %d\n", sizeof(long long int));
  printf("char = %d\n", sizeof(char));
  printf("float = %d\n", sizeof(float));
  printf("double = %d\n", sizeof(double));
  printf("long double = %d", sizeof(long double));

   return 0;
}


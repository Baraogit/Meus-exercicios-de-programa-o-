#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int i, vetor[5], matriz[3][3];

   printf("Enderecos dos indices do vetor: ");
   for (i = 0; i < 5; i++){
     printf("%x  ", (vetor + i));
   }
   printf("\n\n");
   printf("Enderecos dos indices do matriz: ");
   for (i = 0; i < 9; i++){
     printf("%x  ", (*matriz + i));
   }

 return 0;
}

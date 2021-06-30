#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int i, vetor[5], *ponteiro;

   ponteiro = vetor;

   for (i = 0; i < 5; i++){
     scanf("%d", (ponteiro + i));
   }
   printf("Enderecos dos indices do vetor: ");
   for (i = 0; i < 5; i++){
     *(ponteiro + i) += 1;
   }
   for (i = 0; i < 5; i++){
     printf("%d ", *(ponteiro + i));
   }

 return 0;
}

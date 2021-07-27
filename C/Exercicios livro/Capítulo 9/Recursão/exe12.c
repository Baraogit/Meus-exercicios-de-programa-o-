12) Escreva uma função recursiva que receba um valor inteiro em base decimal e o imprima em base binária.

#include <stdio.h>

void converterBinario(int decimal){
  int resto;
  if (decimal <= 0){
    return;
  }
  else{
    converterBinario(decimal / 2);
    resto = decimal % 2;
    if (resto == 0)
      printf("0");
    else
       printf("1");
  }
}

int main(){
  int decimal;
  printf("Digite um valor em decimal: ");
  scanf("%d", &decimal);

  converterBinario(decimal);
   return 0;
}

------------------------------------------------------------------------
Minha forma iterativa final, depois de ter conseguido simplificar bastante. 
#include <stdio.h>

int main(){
  int decimal, i, resto, indiceVetorBinario = 0, cloneDecimal;

  printf("Digite um valor numero para conversao em binario: ");
  scanf("%d", &decimal);
  cloneDecimal= decimal;

  for(cloneDecimal; cloneDecimal > 0; cloneDecimal /= 2){
    indiceVetorBinario++; // conta quantos loops houveram, a quantidade será a qto do array
  }                       // de 0 e 1, também fica de trás para frente

  int binario[indiceVetorBinario];
  for(i = indiceVetorBinario - 1, decimal; decimal > 0; decimal /= 2, i--){
    resto = decimal % 2;// o array começa de tras para frente, pois sequencia
    if (resto == 0)
       binario[i] = 0;
    else
       binario[i] = 1;
  }
  for (i = 0 ; i < indiceVetorBinario; i++){
    printf("%d", binario[i]);
  }
   return 0;
}
-----------------------------------------------------------------
Forma modificada mais simplificada depois de ter visto : https://github.com/misaelrezende/Exercicios-do-Livro-Linguagem-C-Completa-e-Descomplicada/blob/master/Capitulo%209/9.4.3/ex12.c

#include <stdio.h>

int main(){
  int decimal, i, indiceVetorBinario = 0, cloneDecimal;

  printf("Digite um valor numero para conversao em binario: ");
  scanf("%d", &decimal);
  cloneDecimal= decimal; 

  for(cloneDecimal; cloneDecimal > 0; cloneDecimal /= 2){
    indiceVetorBinario++; // conta quantos loops houveram, a quantidade será a qto do array
  }

  int binario[indiceVetorBinario];
  for(i = indiceVetorBinario - 1, decimal; decimal > 0; decimal /= 2, i--){
    binario[i] = decimal % 2; // o array começa de tras para frente, pois sequencia
  }                          // de 0 e 1, também fica de trás para frente
  for (i = 0 ; i < indiceVetorBinario; i++){
    printf("%d", binario[i]);
  }
   return 0;
}


#include <stdlib.h>
#include <stdio.h>

int main(){
  int i, ru_vetor[7], ru_digitado_pelo_usuario, digito_ru, soma_digitos_ru = 0;

  printf("Digite o seu RU: ");
  scanf("%d", &ru_digitado_pelo_usuario);

  for (i = 0; i < 7; i++){
    digito_ru = ru_digitado_pelo_usuario % 10;
    ru_digitado_pelo_usuario /= 10;
    ru_vetor[i] = digito_ru;
  }

  int *ponteiro_para_ru_vetor = ru_vetor;
  for (i = 0; i < 7; i++){
    soma_digitos_ru += *(ponteiro_para_ru_vetor + i);
  }

  printf("Soma dos digitos do RU = %d", soma_digitos_ru);
 
  system("pause");
  return 0;
}

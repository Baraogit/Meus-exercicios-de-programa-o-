Em quantas tentativas precisamos para acertar o número desconhecido, usando pesquisa binária?

2 = base  n = logaritmando x = logaritmo

Em uma pesquisa de n números, a pesquisa binária precisa de log2n = x para retornar o número máximo de tentativas até acertar o número.
Em que x (o logaritmo) é o número de tentativas. 

#include <stdio.h>
#include <stdlib.h>

int fatorarLogaritmando(int logaritmando){
  if (logaritmando == 1)
     return 0;
  else{
    return 1 + fatorarLogaritmando(logaritmando / 2);
  }
}

int main(){
    int logaritmando;

    printf("Digite o valor do logaritimando: ");
    scanf("%d", &logaritmando);

    printf("Valor do logaritmo = %d", fatorarLogaritmando(logaritmando));

  return 0;
}
    
    


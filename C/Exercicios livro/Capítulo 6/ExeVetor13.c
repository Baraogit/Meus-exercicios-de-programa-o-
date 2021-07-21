13) Faça um programa para ler 10 números diferentes a serem armazenados em um
vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir a ele para digitar outro número. Note que cada valor
digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre
os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.


Peguei na internet.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10];
    int i, j;

    for (i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
        for (j = 0; j < i; j++){ // condição: j menor que i, para que J nunca seja maior que I
            if (vet[i] == vet[j]){
                printf("Numero repetido. Tente outra vez\n.");
                i--; // se for repetido, ele faz voltar ao laço , onde tem o elemento repetido
                //ex: i = 3, i-- , i = 2, volta para o loop de i, onde i passa valer novamente 3
                // enquanto no laço 3, for digitado valor repetido, ficará indo e voltando no mesmo laço(3)
                continue;
            }
        }
    }
    printf("Numeros digitados: ");
    for (i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}


---------------------------------------------------------------------------------

Outras tentativas, que não deram certo:

#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10];
    int i, j, numero;

    for (i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
        for (j = 0; j < 10; j++){
            if (vet[i] == vet[j] && i != j){
                while (vet[i] == vet[j]){
                       printf("Nmero reptido. Digite um  outro numero: ");
                       scanf("%d", &vet[i]);
                }
            }
        }
    }
    printf("Numeros digitados: ");
    for (i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
-----------------------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10], repetidos[10];
    int i, j, flag, numero;

    for (i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        flag = 0;
          for (j = 0; j < i; j++){
               if (numero == vet[i]){
                   printf("Voce ja digitou esse numero, digite outro: ");
                   scanf("%d", &vet[i]); // o problema esteja na volta, na c
                   flag = 1;
                   break;
               }
          }
          if (flag == 0)
              vet[i] = numero;
    }
    printf("Numeros digitados: ");
    for (i = 0; i < 10; i++){
        printf("%d ", vet[i]);

    }
    return 0;
}
------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10], repetidos[10];
    int i, j, flag, numero;

    for (i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        flag = 0;
         for (j = 0; j < 10; ){
            if (numero == vet[j]){
                printf("Digite outro numero: ");
                scanf("%d", &vet[j]);
                j++;
            }
            else{
                vet[j] = numero;
                break;
            }

         }
    }
    printf("Numeros digitados: ");
    for (i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10];
    int i, j, numero;

    for (i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);

         for (j = 0; j < 10; j++ ){
            if (numero == vet[j]){
                while (vet[j] == numero){
                       printf("Numero repetido, digite outro numero: ");
                       scanf("%d", &numero);
                }
            }
            else{
                vet[i] = numero;
                break;
            }

         }
    }
    printf("Numeros digitados: ");
    for (i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}


12) Faça um programa que leia um vetor de 10 posições. Verifique se existem valores
iguais e os escreva na tela.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10], iguais[10];
    int i, j, k, indiceDeIguais = 0, flag;

    for (i = 0; i < 10; i++){
        printf("Digite um valor = ");
        scanf("%d",  &vet[i]);
    }
    for (i = 0; i < 9; i++){
        for (j = i+1; j < 10; j++){
            flag = 0;
            if (vet[i] == vet[j]){// se houver elementos iguais dentro de vet[10]
                for (k = 0; k < 10; k++){// loop para rodar vetor iguais[10] e compara se há seus elementos iguais no vet[10]
                    if (iguais[k] == vet[j])/* se o elemento já estiver nesse vetor de iguais[10], flag recebe 1 e só.
                    digamos que não fosse, o programa pula para a condicional abaixo */
                        flag = 1;
                }
                 /* se flag for zero em um determinado loop, significa que  dentro do vetor iguais[10]
                 não há elemento igual dentro do vetor Vet[10], logo, iguais[10] recebe o elemento
                 inédito de vet[10]*/
                if (flag == 0){
                    iguais[indiceDeIguais] = vet[j];// para escrever o numero apenas uma vez
                    indiceDeIguais++;/* var "indiceDeIguais" recebe incremento, cada vez que cai nessa condição, e vale como referência
                    para os índices do vetor iguais[10]*/
                }
            }
        }
    }
    printf("Esses sao os numeros que se repetem: ");
    for (i = 0; i < indiceDeIguais; i++){
        printf("%d ", iguais[i]);
    }
    return 0;
}
// Dois loops para rodar vet[10] e flag recebe valor zero. Dentro do segundo loop, há a primeira condicional.
// Essa primeira condicional, testa  se há  elementos iguais dentro de vet[10].
// Se são iguais: 
//   - Cai em um loop para rodar vetor iguais[10], nesse loop há duas condicionais:
//      - Na primeira condicional, compara se o elemento dentro de iguais[10] é igual ao elemento dentro de vet[10]; se for, flag recebe 1.
//      - Se não for iguais, significa que não existe ainda dentro de iguais[10], esse número repetido; então cai na segunda condicional que faz com que,
//        iguais[10], receba elemento de vet[10], elemento esse que se repete,  mas inédito para iguais[10]. 


Algoritmo tirado de: https://www.clubedohardware.com.br/topic/1331397-leia-um-vetor-de-10-posições-e-verifique-se-existem-valores-iguais-e-os-escreva/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------


Esse algoritmo funciona quando se é para imprimir numeros que se repetem, mas imprime varias vezes um mesmo número. 
#include <stdio.h>

int main(){
    int vet[10],  i, j;
    for(i = 0; i < 10; i++){
       printf("Digite um numero: ");
       scanf("%d", &vet[i]);
    }
    for (i = 0; i < 9; i++){
        for (j = i+1; j < 10; j++){
            if (vet[i] == vet[j]){
                printf("Valor que se repete = %d\n", vet[i]);
                break;
            }    
        }
    }
    return 0;
}


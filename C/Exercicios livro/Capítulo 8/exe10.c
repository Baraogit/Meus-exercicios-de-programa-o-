10) Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais
novo.

#include <stdio.h>
#include <string.h>

struct atleta{
    char nome[50], tipoDeEsporte[50];
    int idade;
    float altura; 
};

int main(){
    struct atleta coletaDadosAtleta[5], auxiliaNaTroca;
    int i, j;
   
    printf("Coleta dados do atleta:\n");
    for (i = 0; i < 5; i++){
        printf("Nome do atleta: ");
        setbuf(stdin, NULL);
        fgets(coletaDadosAtleta[i].nome, 50, stdin);
        printf("Tipo de esporte praticado: ");
        setbuf(stdin, NULL);
        fgets(coletaDadosAtleta[i].tipoDeEsporte, 50, stdin);
        printf("Idade e altura:\n");
        scanf("%d %f", &coletaDadosAtleta[i].idade, &coletaDadosAtleta[i].altura);
    }
    //faz a ordenação 
    for (i = 0; i < 4; i++){
        for (j = i+1; j < 5; j++){
            if (coletaDadosAtleta[i].idade < coletaDadosAtleta[j].idade){
                auxiliaNaTroca = coletaDadosAtleta[i];
                coletaDadosAtleta[i] = coletaDadosAtleta[j];
                coletaDadosAtleta[j] = auxiliaNaTroca; 
            }
        }
    }
    printf("Do atleta mais velho  para o mais novo:\n"); 
    for (i = 0; i < 5; i++){
        printf("%s\n",coletaDadosAtleta[i].nome);
    }
    return 0;
}

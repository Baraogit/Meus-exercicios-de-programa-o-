9) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os
dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais
velho.


#include <stdio.h>
#include <string.h>

struct atleta{
    char nome[50], tipoDeEsporte[50];
    int idade;
    float altura; 
};

int main(){
    struct atleta coletaDadosAtleta[5];
    int i, maisVelho ;
    float maisAlto; 
    
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
    // descobre quem é o mais alto
    maisAlto = coletaDadosAtleta[0].altura;
    for (i = 0; i < 5; i++){
        if (coletaDadosAtleta[i].altura > maisAlto)
           maisAlto = coletaDadosAtleta[i].altura; 
    }
    // descobre os mais velhos
    maisVelho = coletaDadosAtleta[0].idade; 
    for (i = 0; i < 5; i++){
        if (coletaDadosAtleta[i].idade > maisVelho)
           maisVelho = coletaDadosAtleta[i].idade; 
    }
    // escreve na tela os atletas mais altos 
    printf("Atletas mais altos:\n");
    for (i = 0; i < 5; i++){
        if (maisAlto == coletaDadosAtleta[i].altura)
           printf("%s", coletaDadosAtleta[i].nome); 
    }
    // escreve na tela os atletas mais velho 
    printf("Atletas mais velhos:\n");
    for (i = 0; i < 5; i++){
        if (maisVelho == coletaDadosAtleta[i].idade)
           printf("%s", coletaDadosAtleta[i].nome); 
    }
    
    
    return 0;
}

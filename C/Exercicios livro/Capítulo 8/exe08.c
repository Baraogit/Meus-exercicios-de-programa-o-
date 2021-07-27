8) Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e
exiba os nomes da pessoa mais nova e da mais velha




#include <stdio.h>
#include <string.h>

struct pessoa{
    int dia, mes, ano;
    char nome[50]; 
};

int main(){
    
    struct pessoa coletaPessoa[4];
    int i; 
    float maisVelho, maisNovo, dataDecimal[4];
    
    for (i = 0; i < 4; i++){
        printf("Pessoa %d\n", i+1 );
        printf("Digite o nome: ");
        setbuf(stdin, NULL); 
        fgets(coletaPessoa[i].nome, 50, stdin);
        printf("Digite sua data de nascimento (dia/mes/ano): ");
        scanf("%d%d%d", &coletaPessoa[i].dia, &coletaPessoa[i].mes, &coletaPessoa[i].ano);
    }
    // converte a data convencional em uma forma dataDecimal e armazena em um vetor;
    for (i = 0; i < 4; i++){
        dataDecimal[i] = coletaPessoa[i].ano + (coletaPessoa[i].mes / 12.0) + (coletaPessoa[i].dia / 365.0);
        
    }
    // compara e descobre a pessoa mais velha e mais nova
    maisVelho = maisNovo = dataDecimal[0];
    for (i = 0; i < 4; i++){
        if (dataDecimal[i] < maisVelho){
            maisVelho = dataDecimal[i];
        }
        if (dataDecimal[i] > maisNovo){
            maisNovo = dataDecimal[i];
        }
    }
    // imprime os mais vellhos 
    printf("Pessoas mais velhas:\n");
    for (i = 0; i < 4; i++){
        if (maisVelho == dataDecimal[i]) // compara se há no vetor dataDecimal, valores iguais a var maisVelho
           printf("%s", coletaPessoa[i].nome);
    }
    // imprime os  mais novos
    printf("Pessoas mais novas:\n");
    for (i = 0; i < 4; i++){
        if (maisNovo == dataDecimal[i])// compara se há no vetor dataDecimal, valores iguais a var maisnovo
           printf("%s",  coletaPessoa[i].nome);
    }
    return 0;
}
--------------------------------------------------
Nessa primeira tentativa, imprimia o mais velho e o mais novo, mas não se houvesse pessoas com idades iguais, não imprimia todas elas, somente a primeira
mais nova e a primeira mais velha. 

#include <stdio.h>
#include <string.h>

struct pessoa{
    int dia, mes, ano;
    char nome[50]; 
};

int main(){
    
    struct pessoa coletaPessoa[4];
    int i, indiceVelho = 0, indiceNovo = 0; 
    float maisVelho, maisNovo, dataDecimal[4];
    
    for (i = 0; i < 4; i++){
        printf("Pessoa %d\n", i+1 );
        printf("Digite o nome: ");
        setbuf(stdin, NULL); 
        fgets(coletaPessoa[i].nome, 50, stdin);
        printf("Digite sua data de nascimento (dia/mes/ano): ");
        scanf("%d%d%d", &coletaPessoa[i].dia, &coletaPessoa[i].mes, &coletaPessoa[i].ano);
    }
    // converte a data convencional em uma forma dataDecimal e armazena em um vetor;
    for (i = 0; i < 4; i++){
        dataDecimal[i] = coletaPessoa[i].ano + (coletaPessoa[i].mes / 12.0) + (coletaPessoa[i].dia / 365.0);
        
    }
    // compara e descobre a pessoa mais velha e mais nova
    maisVelho = maisNovo = dataDecimal[0];
    for (i = 0; i < 4; i++){
        if (dataDecimal[i] < maisVelho){
            maisVelho = dataDecimal[i];
            indiceVelho = i;
        }
        if (dataDecimal[i] > maisNovo){
            maisNovo = dataDecimal[i];
            indiceNovo = i;
        }
    }
     
    printf("Pessoa mais velha: %s", coletaPessoa[indiceVelho].nome);
    printf("Pessoa mais nova: %s",  coletaPessoa[indiceNovo].nome);
    
    return 0;
}


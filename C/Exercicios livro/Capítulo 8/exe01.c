#include <stdio.h>
#include <stdlib.h>


struct cadastro_pessoa{
   char nome[50], endereco[50];
   int idade;
};

int main(){
     struct cadastro_pessoa pessoa;

     printf("Digite o nome: ");
     gets(pessoa.nome);
     printf("Digite sua idade: ");
     scanf("%d", &pessoa.idade);
     printf("Digite o seu endereco: ");
     setbuf(stdin, NULL);
     gets(pessoa.endereco);
     printf("%s, com a idade de %d, morador da rua %s", pessoa.nome, pessoa.idade, pessoa.endereco);
 return 0;
}

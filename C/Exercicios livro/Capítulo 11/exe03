3) Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idadee o endereço de uma pessoa.
Agora, escreva uma função que receba um inteiro positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura.
Solicite também que o usuário digite os dados desse vetor dentro da função.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Cadastro{
  char nome[50], endereco[50];
  int idade;
};

struct Cadastro* cadastrar(int n){
  int i;
  struct Cadastro *cadastro = malloc(n * sizeof(struct Cadastro));
  if (cadastro == NULL){
    printf("Nao espaco na memoria para alocacao");
    exit(1);
  }

  for (i = 0; i < n; i++){
    printf("Digite o nome: ");
    scanf("%s", cadastro[i].nome);
    printf("Digite sua idade: ");
    scanf("%d", &cadastro[i].idade);
    printf("Digite o endereco: ");
    scanf("%s", cadastro[i].endereco);
  }
  return cadastro;
}

int main(){
  struct Cadastro *cadastro;
  int i, n;
  printf("Quantas pessoas voce quer cadastrar: ");
  scanf("%d", &n);

  cadastro = cadastrar(n);

  printf("Dados cadastrados\n");
  for (i = 0; i < n; i++){
    printf("Pessoa %d:\n", i+1);
    printf("Nome = %s\n", cadastro[i].nome);
    printf("Idade = %d\n", cadastro[i].idade);
    printf("Endereco = %s\n\n", cadastro[i].endereco);
  }
  free(cadastro);

  return 0;
}

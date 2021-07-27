7) Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira.
Use aritmética de ponteiros para acessar os caracteres das strings.

https://github.com/misaelrezende/Exercicios-do-Livro-Linguagem-C-Completa-e-Descomplicada/blob/master/Capitulo%2010/ex07.c
#include <stdio.h>
/*  A lógica usada foi a seguinte:
    Se a segunda string está contida completamente em algum trecho
    da primeira string entao ela ESTÁ contida na primeira string.
    Casos de Teste:
    string 1: a vida de joana nao eh facil
    string 2: joana
    resposta: A segunda string esta contida na primeira string
    string 1: a vida de joana nao eh facil
    string 2: a
    resposta: A segunda string esta contida na primeira string
    string 1: a vida de joana nao eh facil
    string 2: vida
    resposta: A segunda string esta contida na primeira string
    Tem mais outros casos de teste depois do código
*/
int verifica(char *string1, char *string2){
    int i, j, auxiliar = 0;
    for(i = 0, j = 0; (*(string1 + i)) != '\0'; i++){
        // enquanto as posicoes das strings forem iguais
        while( (*(string1 + i)) == (*(string2 + j)) ){
            i++;
            j++;
            // se acabou a segunda string
            if( (*(string2 + j)) == '\n' || (*(string2 + j)) == '\0')
                return 1;
            // se nao eh mais igual, faz auxiliar ser 0
            else if( (*(string1 + i)) != (*(string2 + j)) )
                auxiliar = 0;
        }
    }
    return auxiliar;
}

int main(){
    char string1[100], string2[50];
    fgets(string1, 100, stdin);
    fgets(string2, 50, stdin);

    int retorno = verifica(string1, string2);
    if(retorno == 1)
        printf("A segunda string esta contida na primeira string\n");
    else
        printf("A segunda string NAO esta contida na primeira string\n");
    return 0;
}
---------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void verificarString(char *string1, char *string2){
  int i, j;
  char stringAux[50];

  for (i = 0; i < strlen(string1); i++){
    if (*(string1 + i) == *(string2 + i))
        *(stringAux + i) =

  }

}

int main(){
  char string1[50], string2[50];

  printf("Digite a primeira string: ");
  fgets(string1, 50, stdin);
  string1[strlen(string1) - 1] = '\0';
  printf("Digite a segunda string: ");
  fgets(string2, 50, stdin);
  string2[strlen(string2) - 1] = '\0';

  verificarString(string1, string2);


 return 0;
}

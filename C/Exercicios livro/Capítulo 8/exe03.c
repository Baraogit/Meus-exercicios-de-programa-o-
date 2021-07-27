3) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct PONTO{
   double posicaoX, posicaoY;
};

int main(){
     struct PONTO a, b;
     double distanciaEntrePontos;

     printf("Digite as coordenadas do ponto A\n");
     printf("Coordenada X : ");
     scanf("%lf", &a.posicaoX);
     printf("Coordenada Y : ");
     scanf("%lf", &a.posicaoY);

     printf("Digite as coordenadas do ponto B\n");
     printf("Coordenada X : ");
     scanf("%lf", &b.posicaoX);
     printf("Coordenada Y : ");
     scanf("%lf", &b.posicaoY);

     distanciaEntrePontos = sqrt(pow( (a.posicaoX - b.posicaoX ), 2) + pow( (a.posicaoY - b.posicaoY), 2) );
     printf("Distancia do ponto A para a origem = %lf\n", distanciaEntrePontos);

 return 0;
}


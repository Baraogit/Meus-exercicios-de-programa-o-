11) Escreva uma função que receba por parâmetros dois valores inteiros x e y e calcule
e retorne o resultado de x y
 para o programa principal. Não use nenhuma função
pronta para isso.

#include <stdio.h>

calculaExponenciacao (int base, int expoente){
    int i, resultado = 0;
    for (i = 0; i < expoente; i++){
        resultado += base;
    }
    printf("Resultado = %d", resultado); 
}

int main(){
    int x, y; 
    
    printf("Digite  o valor da base e do expoente:\n");
    scanf("%d %d", &x, &y);
    
    calculaExponenciacao(x, y); 
  
    return 0;
}

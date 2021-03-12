7) Escreva uma função recursiva que receba por parâmetro dois valores inteiros x e y
e calcule e retorne o resultado de xy  para o programa principal.

#include <stdio.h>

int calcularExponenciacao(int base, int expoente){  
    if (expoente == 0)
       return 1;
    else
       return base * calcularExponenciacao(base, expoente - 1); 
}

int main(){
    int base, expoente; // base seria x expoente y, do exercício. 
    
    printf("Dgite a base e o expoente: ");
    scanf("%d %d", &base, &expoente); 
    
    printf("resultado = %d", calcularExponenciacao(base, expoente)); 

    return 0;
}

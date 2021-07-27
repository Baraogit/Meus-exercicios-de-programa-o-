15) Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um programa que inicialize um dos tipos dessa união e exiba em tela o valor do outro tipo.

#include <stdio.h>

union tiposDeDados{
    long int inteiroLongo;
    char caractere; 
};

int main(){
    union tiposDeDados dado; 
    
    dado.inteiroLongo = 1000; 
    printf("Inteiro longo = %d\n", dado.inteiroLongo);
    printf("Char = %d\n", dado.caractere); 
    dado.caractere = 50; 
    printf("Inteiro longo = %d\n", dado.inteiroLongo);
    printf("Char = %d\n", dado.caractere); 
    
    return 0;
}

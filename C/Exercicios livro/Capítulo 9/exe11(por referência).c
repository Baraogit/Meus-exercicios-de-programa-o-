11) Escreva uma função que receba uma string e converta todos os seus caracteres
em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e
122.

#include <stdio.h>

void converterMaiuscula (char *palavra){
    int i;
    char palavraMaiuscula[50] = {0};
    for(i = 0; i < strlen(palavra); i++){
        palavraMaiuscula[i] = palavra[i] - 32;
    }
    printf("Palavra convertidada para maiuscula: %s", palavraMaiuscula); 
}

int main(){
    char palavra[50]; 
    printf("Digite uma palavra para a conversao em maiuscula: ");
    scanf("%s", palavra); 
    
    converterMaiuscula(palavra);
    
    return 0;
}

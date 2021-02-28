1) Escreva uma função que receba por parâmetro dois números e retorne o maior
deles.


#include <stdio.h>

int descobrirMaiorNumero (int funcNumero1, int funcNumero2){
    int maiorNumero; 
    
    if (funcNumero1 > funcNumero2)
        maiorNumero = funcNumero1;
    else 
       maiorNumero = funcNumero2;
       
    return maiorNumero; 
}

int main(){
    int numero1, numero2, retornoFuncao;
    printf("Digite dois numeros: ");
    scanf("%d %d", &numero1, &numero2);
    
   retornoFuncao = descobrirMaiorNumero(numero1, numero2);
   printf("Maior numero eh = %d", retornoFuncao); 

    return 0;
}
----------------------------------------------------
#include <stdio.h>

void descobrirMaiorNumero (int funcNumero1, int funcNumero2){
    int maiorNumero; 
    
    if (funcNumero1 > funcNumero2)
        printf("Maior numero = %d", funcNumero1); 
    else 
       printf("Maior numero = %d", funcNumero2);
}

int main(){
    int numero1, numero2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &numero1, &numero2);
    
    descobrirMaiorNumero(numero1, numero2);
   
    return 0;
}


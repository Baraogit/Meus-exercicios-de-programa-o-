9) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior
valor lido.

#include <stdio.h>

int main()
{
    int i = 0, valor, maiorValor, menorValor; 
    
    printf("Digite um valor: ");
    scanf("%d", &valor); 
    maiorValor = valor; 
    menorValor = valor;
    
    while (i < 9){
        printf("Digite um outro valor: ");
        scanf("%d", &valor);
        if (valor > maiorValor)
           maiorValor = valor; 
        else
            if (valor < menorValor)
                menorValor = valor; 
        i++;
    }
    printf("Maior valor = %d\n", maiorValor);
    printf("Menor valor = %d\n", menorValor);
 
    return 0;
}

---------------------------------------------------
#include <stdio.h>

int main()
{
    int i = 0, valor, maiorValor, menorValor; 
    
    while (i < 10){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (i == 0){// com essa condição, as variáveis "maiorValor" e "menorValor", recebem o  variável "valor" somente no primeiro loop
            maiorValor = valor;
            menorValor = valor;
        }
        if (valor > maiorValor)
           maiorValor = valor; 
        else
            if (valor < menorValor)
                menorValor = valor; 
        i++;
    }
    printf("Maior valor = %d\n", maiorValor);
    printf("Menor valor = %d\n", menorValor);
 
    return 0;
}
----------------------------------------------
#include <stdio.h>

int main()
{
    int i , valor, maiorValor, menorValor; 
    
    for (i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (i ==0){
            maiorValor = valor;
            menorValor = valor;
        }
        if (valor > maiorValor)
           maiorValor = valor;
        else
           if (valor < menorValor)
              menorValor = valor;
    }
    printf("Maior valor = %d\n", maiorValor);
    printf("Menor valor = %d\n", menorValor);
 
    return 0;
}

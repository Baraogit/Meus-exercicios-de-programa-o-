-------------------------------------------------Usando a variável troca para deixar ordenado de forma crescente-----------------------------------------------
#include <stdio.h>

int main(){
    int number1, number2, somaPares = 0, multiImpares = 1, troca;

    printf("Digite dois numeros: ");
    scanf("%d %d", &number1, &number2);

    if (number1 > number2){
        troca = number1;
        number1 = number2;
        number2 = troca;
    }
    if (number1 != number2){
        for ( ; number1 <= number2; number1++){
            if (number1 % 2 == 0)
                somaPares += number1;
            else{
                multiImpares = multiImpares * number1;
            }
            printf("Soma dos pares = %d\n", somaPares);
            printf("Multiplicacao dos impares = %d\n", multiImpares);
        }
    }
    else
        printf("Numeros iguais");

    return 0;
}



-------------------------------------------------Sem a variável troca-----------------------------------------------

#include <stdio.h>

int main(){
    int number1, number2, somaPar = 0, multiImpar = 1;

    printf("Digite dois numeros: ");
    scanf("%d %d", &number1, &number2);

    if (number1 > number2){
        for ( ; number1 >= number2; number1--){
            if (number1 % 2 == 0)
                somaPar += number1;
            else
                multiImpar = multiImpar * number1;
        }
        printf("Soma dos pares = %d\n", somaPar);
        printf("Multiplicacao dos impares = %d\n", multiImpar);
    }
    else
        if (number1 < number2){
            for ( ; number1 <= number2; number1++){
                if (number1 % 2 == 0)
                    somaPar += number1;
                else
                    multiImpar = multiImpar * number1;
            }
            printf("Soma dos pares = %d\n", somaPar);
            printf("Multiplicacao dos impares = %d\n", multiImpar);
        }
        else
            if (number1 == number2){
               printf("Numeros iguais");
    return 0;
}


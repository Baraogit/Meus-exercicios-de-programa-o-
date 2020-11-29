19) Faça um programa que calcule e escreva o valor de S:
s = 1/1 + 3/2+ 5/3+ 7/4 + ...99/55
// o correto seria, penso eu : 99/50, pois de 1 a 99, há 50 numeradores, logo o correto seria ter 50 denominadores, pois com 55
a conta não fecha. O problema foi resolvido levando em conta 50 denominadores, depois de tentar e quebra muito a cabeça com 55. 

#include <stdio.h>

int main(){

    float numerador, denominador, s = 0;

    for (numerador = 1, denominador = 1; numerador <= 99; numerador += 2, denominador++ ){
        s += numerador / denominador;
    }
    printf("S = %f", s);

    return 0;
}

---------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){

    float numerador = 1, denominador = 1, s = 0;

    while (denominador <= 50){
        s += numerador / denominador;
        numerador += 2;
        denominador++;
    }
    printf("S = %f", s);

    return 0;
}








------------------------------------------------ Eu entendi a questão de forma errada rsrs--------------------------------------------------------
// eu achei que a questão consistia em chegar no resultado 99/55 e fazer a divisão. Mas a burrice e a pressa deve ser lembrada para que não se repita, então, deixo-a aqui. 
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 99; i += 2){
        if (i == 99)
            break;
    }
    for (j = 1; j <= 55; j++){
        if (j == 55)
            break;
    }
    printf("S = %f", (float) i/ j);
    return 0;
}
---------------------------------------------  sem uso do break, onde é necessário retirar o operador relacional  "=" das condições------------------------------
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i < 99; i += 2){
    }
    for (j = 1; j < 55; j++){
    }
    printf("S = %f", (float) i/ j);
    return 0;
}

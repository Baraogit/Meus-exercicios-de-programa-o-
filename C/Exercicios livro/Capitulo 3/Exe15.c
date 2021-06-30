15) Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido.
Exemplo:
 Número lido = 123
Número gerado = 321

#include <stdio.h>

int main()
{
    short int numero, centena, dezena, unidade, numero_invertido;
    printf("Digite um valor com 3 digititos:\n"); 
    scanf("%d", &numero); /* importante usar o tipo de saida %d, se caso use %i e o valor digitado
    começar com 0, irá ser reconhecido como octal, e a inversão não irá funcionar */    
    
    centena = numero % 10 * 100;// isola a unidade e transforma em centena
    dezena = numero % 100 / 10 * 10;//isola a dezena
    unidade = numero / 100; // isola a centena e converte para uniadde
    numero_invertido = centena + dezena + unidade;
    
    printf("\n");
    printf("Centena = %d\n", centena);
    printf("Dezena = %d\n", dezena);
    printf("Unidade = %d\n", unidade);
    printf("Numero digitado: %d\n", numero);
    printf("Numero invertido: %d\n", numero_invertido);
    
    return 0;
}






IMPORTANTE1! Esses dois algoritmos não resolvem o problema, quando digitado 0 na casa da centena. Trabalhando ainda na solução. 

IMPORTANTE2!Eles não estavam funcionando adequadamente por conta do tipo de saída %i, que ao ler um número com começo 0, reconhece como octal e converte para o seu correspondente, 
em decimal. O tipo de saída de dado %d é usado exclusivamente para número da base 10, ou seja, decimais. 
Quebrei muita a cabeça, até se ligar nisso.
Apesar de ter entendido o problema, esses dois algoritmos não estão lá tão legíveis; mas foram por eles que progressivamente fui mudando aqui e ali, até chegar no algoritmo
há cima.  
Se usá-los, faça  o teste, na linha scanf("%i", &numero);  use com o tipo de saída %i e %d. 

#include <stdio.h>

int main()
{
    short int numero, numero_invertido, encontra_dezena; 
    printf("Digite um valor com 3 digititos:\n"); 
    scanf("%i", &numero);
    encontra_dezena = numero % 100;
    numero_invertido = ((numero % 10) * 100) + (numero / 100) + (encontra_dezena - (encontra_dezena % 10));
    printf("%i", numero_invertido);

    return 0;
}


Outro algoritmo:

#include <stdio.h>

int main()
{
    short int numero, numero_invertido, encontra_dezena, encontra_unidade, encontra_centena,subtrai_dezena_pela_unidade ; 
    printf("Digite um valor com 3 digititos:\n"); 
    scanf("%i", &numero);
    
    encontra_centena = numero % 10 * 100; // isola a unidade e multiplica por 100 = achou a centena
    encontra_dezena = numero % 100; // isola a dezena
    subtrai_dezena_pela_unidade = encontra_dezena - (encontra_dezena % 10); /*subtrai a unidade da dezena encontrada,  
    pela própria dezena, deixando a unidade com valor 0. Ex.: 23 - 3 = 20 */

    encontra_unidade = (numero / 100); // isola a unidade
    numero_invertido = encontra_centena + subtrai_dezena_pela_unidade + encontra_unidade;// soma
    
    printf("%i", numero_invertido);

    return 0;
}

16) Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:
hn: 1 + 1/2 +1/2+1/3+...1/n
Apresente um programa que calcule o valor de qualquer Hn.

#include <stdio.h>

int main()
{
    int i, enesimoTermoHarmonico;
    float recebeCalculoHarmonico = 0.0;
    printf("Digite um inteiro: ");
    scanf("%d", &enesimoTermoHarmonico);
    
    for (i = 1; i <= enesimoTermoHarmonico; i++){
        recebeCalculoHarmonico +=  (float) 1 / i;
    }
    printf("Valor harmonico do inteiro: %f\n", recebeCalculoHarmonico);

    return 0;
}

---------------------------------------------------------------------

#include <stdio.h>

int main()
{
    int i = 1, enesimoTermoHarmonico;
    float recebeCalculoHarmonico = 0.0;
    printf("Digite um inteiro: ");
    scanf("%d", &enesimoTermoHarmonico);

    while (i <= enesimoTermoHarmonico){
        recebeCalculoHarmonico += (float)1 / i;
        i++;
    }
    printf("Valor harmonico do inteiro: %f\n", recebeCalculoHarmonico);


    return 0;
}

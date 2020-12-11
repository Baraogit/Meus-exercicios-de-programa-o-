#include <stdio.h>

int main(){
    float  notas, somaNotas = 0, cont = 0;

    printf("Digite suas notas: ");
    scanf("%f", &notas);

    while (notas >= 10 && notas <= 20){
        somaNotas += notas;
        cont++;
        printf("Digite suas notas: ");
        scanf("%f", &notas);
    }
    if (cont >= 1)
        printf("Media das notas = %.2f", somaNotas / cont);
    return 0;
}
-----------------------------------------------------------
#include <stdio.h>

int main(){
    float  notas = 10, somaNotas = 0, cont = 0;

    while (notas >= 10 && notas <= 20){
        printf("Digite suas notas: ");
        scanf("%f", &notas);
        if (notas < 10 || notas > 20)
            break;
        somaNotas += notas;
        cont++;
    }
    if (cont >= 1)
        printf("Media das notas = %.2f", somaNotas / cont);
    return 0;
}

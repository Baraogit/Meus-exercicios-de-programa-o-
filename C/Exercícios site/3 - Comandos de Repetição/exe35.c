#include <stdlib.h>
#include <stdio.h>

int main(){
    int comecoIntervalo, finalIntervalo, somaImpares = 0;

    printf("Digite o  inicio e o fim do intervalor: ");
    scanf("%d %d", &comecoIntervalo, &finalIntervalo);


    if (comecoIntervalo < finalIntervalo){
        for ( ; comecoIntervalo <= finalIntervalo; comecoIntervalo++){
             if (comecoIntervalo % 2 != 0)
             somaImpares += comecoIntervalo;
        }
        printf("Soma dos impares neste intervalo = %d\n", somaImpares);
    }
    else
        if (comecoIntervalo > finalIntervalo)
            printf("Intervalo de valores invalidos\n");
    return 0;
}

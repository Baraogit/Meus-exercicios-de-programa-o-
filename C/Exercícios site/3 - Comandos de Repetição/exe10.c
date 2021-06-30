
#include <stdio.h>

int main(){

    int i, pares = 0, somaPares = 0;

    for (i = 0; i < 50; i++, pares += 2){
            somaPares += pares;
    }

    printf("Valor da soma: %d", somaPares);

    return 0;
}
--------------------------------------------------------------
#include <stdio.h>

int main(){

    int i, pares = 0, somaPares = 0;

    for (i = 0; i < 100; i++){
        if ( i % 2 == 0)
            somaPares += i;
    }
    printf("Valor da soma: %d", somaPares);

    return 0;
}

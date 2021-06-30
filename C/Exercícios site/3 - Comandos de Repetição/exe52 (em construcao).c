#include <stdio.h>


int main(){
    int  saque, nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    printf("Informe o valor do saque: ");
    scanf("%d", &saque);

    for (nota100 = 0; nota100 < saque / 100; nota100++){
    }

    for (nota50 = 0; nota50 < saque % 100 / 50; nota50++){
    }
    for (nota20 = 0; nota20 < saque % 100 / 20; nota20++){
    }
    for (nota10 = 0; nota10 < saque % 100 / 10; nota10++){
    }


    for (nota5 = 0; nota5 < saque % 10; nota5++){
    }
    for (nota2 = 0; nota2 < saque % 10; nota2++){
    }
    for (nota1 = 0; nota1 < saque % 10; nota1++){
    }

    printf("Nota de 100 = %d\n", nota100);
    printf("Nota de 50 =  %d\n", nota50);
    printf("Nota de 20 = %d\n", nota20);
    printf("Nota de 10 = %d\n", nota10);
    printf("Nota de 5 = %d\n", nota5);
    printf("Nota de 2 = %d\n", nota2);
    printf("Nota de 1 = %d\n", nota1);
    return 0;
}

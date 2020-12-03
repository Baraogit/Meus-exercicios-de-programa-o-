#include <stdlib.h>
#include <stdio.h>

int main(){
    int opcao, x, y;


    do{
        printf("Digite dois numeros: ");
        scanf("%d %d", &x,&y);
        printf("1 - adicao\n");
        printf("2 - subtracao\n");
        printf("3 - divisao\n");
        printf("4 - multiplicacao\n");
        printf("5 - sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1: printf("%d + %d = %d\n", x, y, x+y);
               break;
            case 2: printf("%d - %d = %d\n", x, y, x-y);
               break;
            case 3: printf("%d / %d = %.2f\n", x, y, (float)x/y);
               break;
            case 4: printf("%d * %d = %d\n", x,y, x*y);
               break;
        }
    } while (opcao != 5);
    return 0;
}

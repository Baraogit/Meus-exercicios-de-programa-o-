#include <stdio.h>

int main(){

    int i, number;

    printf("Type a positive integer and even: ");
    scanf("%d", &number);

    for (i = 0; i <= number; i += 2){
        printf("%d ", i);
    }
    return 0;
}
--------------------------------------------------------------
#include <stdio.h>

int main(){

    int i = 0, number;

    printf("Type a positive integer and even: ");
    scanf("%d", &number);

    while ( i <= number){
        printf("%d ", i);
        i += 2;
    }
    return 0;
}


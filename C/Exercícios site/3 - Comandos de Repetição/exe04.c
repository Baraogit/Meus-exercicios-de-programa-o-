#include <stdio.h>

int main(){

    int i ;

    for (i = 0; i <= 100000; i += 1000){
        printf("%d ", i);
    }
    
    return 0;
}

--------------------------------------------
#include <stdio.h>

int main(){

    int i = 0;

    while ( i <= 100000){
        printf("%d ", i);
        i += 1000;
    }

    return 0;
}

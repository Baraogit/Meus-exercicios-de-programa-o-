6) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.

#include <stdio.h>

int main()
{
    float km_h, metros_s;
    printf("Digite um valor do km/h\n");
    scanf("%f", &km_h);
    metros_s = km_h/36;
    printf("Conversão em m/s : %.2f", metros_s);
    
    return 0;
}


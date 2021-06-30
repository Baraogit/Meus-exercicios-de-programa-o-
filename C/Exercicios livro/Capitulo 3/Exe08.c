8) Leia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = C ∗ (9.0/5.0) +
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

int main()
{
    float celsius, fahrenheit; 
    printf("Digite um valor em celsius para ser convertido para fahrenheit:\n");
    scanf("%f", celsius);
    fahrenheit = celsius * (9.0 / 5.0) +32.0; 
    printf("Valor convertido para fahrenheit: %.2f\n", fahrenheit);
    
    return 0;
}

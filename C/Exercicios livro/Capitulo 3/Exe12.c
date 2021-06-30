12) Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
           V = π * raio² * altura,  em que π = 3.141592

#include <stdio.h>
#define PI 3.141592

int main()
{
    float altura_cilindro, raio_cilindro, volume_cilindro;  
    printf("Digite a altura e raio do cilindro, respectivamente\n: ");
    scanf("%f %f", &altura_cilindro, &raio_cilindro);
    volume_cilindro = PI * (raio_cilindro * raio_cilindro) * altura_cilindro;
    printf("Volume do cilindro: %.2f", volume_cilindro); 
    
    return 0;
}

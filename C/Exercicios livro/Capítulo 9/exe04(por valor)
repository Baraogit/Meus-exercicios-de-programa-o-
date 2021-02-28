4) Escreva uma função que receba por parâmetro a altura e o raio de um cilindro
circular e retorne o volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula:
V = π * raio2 * altura,  em que π = 3.1414592. 

#include <stdio.h>
#define  PI 3.1414592

void calculaVolumeCilindro (float altura, float raio){
    float volume;
    volume = PI * (raio * raio) * altura;
    printf("Volume do cilindro = %.2f\n", volume);
}

int main(){
    
    float alturaCilindro, raioCilindro;
    
    printf("Digite a altura do cilindro: ");
    scanf("%f", &alturaCilindro); 
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raioCilindro); 
    
    calculaVolumeCilindro(alturaCilindro, raioCilindro);

    return 0;
}

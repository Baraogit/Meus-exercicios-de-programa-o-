5) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 • O número digitado ao quadrado.
 • A raiz quadrada do número digitado.

#include <math.h>

int main()
{
    short int numero, quadradoDo_numero_positivo, raizQuadradaDo_numero_positivo;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    
    if (numero > 0){
       quadradoDo_numero_positivo = pow(numero, 2);
       raizQuadradaDo_numero_positivo = sqrt(numero);
    }
    else 
      printf("Nao eh um numero positivo");
     
    printf("Quadrado de %d = %d\n", numero, quadradoDo_numero_positivo);
    printf("Raiz quadrada de %d = %d\n", numero, raizQuadradaDo_numero_positivo);
    

    return 0;
}

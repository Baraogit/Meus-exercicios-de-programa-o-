9) Elabore uma função que receba três notas de um aluno como parâmetros e uma
letra. Se a letra for “A”, a função deverá calcular a média aritmética das notas do
aluno; se for “P”, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne
a média calculada para o programa principal.

#include <stdio.h>

void calculaMediaDasNotas (float nota1, float nota2, float nota3, char tipoDeMedia){
    
    if (tipoDeMedia == 'A')
        printf("Valor da media aritimética = %.2f", (nota1 + nota2 + nota3) / 3); 
    else 
       if (tipoDeMedia == 'P')
           printf("Valor da media ponderada = %.2f", (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10);
}


int main(){
    float nota1, nota2, nota3; 
    char tipoDeMedia; 
    
    printf("Digite as 3 notas do aluno:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3); 
    setbuf(stdin,NULL);
    printf("Escolha o tipo de media (A = Aritmetica - P = Ponderada): "); 
    scanf("%c", &tipoDeMedia);
    
    calculaMediaDasNotas(nota1,nota2,nota3,tipoDeMedia);
    
    return 0;
}

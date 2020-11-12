4) Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo. Se a prestação:
 • For maior que 20% do salário, imprima: “Empréstimo não concedido.”
 • Caso contrário, imprima: “Empréstimo concedido.”

#include <stdio.h>

int main()
{
    float salario, prestacao_emprestimo, vintePorCentoDoSalario;
    
    printf("Digite o seu salario:\n");
    scanf("%f", &salario);
    
    printf("Digite o valor da prestacao do emprestimo:\n");
    scanf("%f", &prestacao_emprestimo); 
    
    vintePorCentoDoSalario = salario * 20 / 100; 
    
    if (prestacao_emprestimo > vintePorCentoDoSalario)
      printf("Emprestimo não concedido");
    else
      printf("Emprestimo concedido");
     
    return 0;
}


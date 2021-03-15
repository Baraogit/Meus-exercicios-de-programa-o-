11) Escreva uma função recursiva que receba um valor inteiro e o retorne invertido.
Exemplo:
 Número lido = 123.
 Número retornado = 321.
 
 #include <stdio.h>
 
void imprimirNumeroInvertido(int n){
    int unidade;
    if (n == 0)
       return;
    else
       unidade =  n % 10;
       
       imprimirNumeroInvertido(n / 10);
       printf("%d", unidade);
}

int main(){
   int n; 
   printf("Digite um valor: ");
   scanf("%d", &n);
   
   imprimirNumeroInvertido(n); 
   
   return 0; 
}

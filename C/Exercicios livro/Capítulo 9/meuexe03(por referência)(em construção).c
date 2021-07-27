Criar o jogo da forca

#include <stdio.h>
#include <string.h>

void verificarCaractereNaPalavraSecreta(char *palavraSecreta, char *letra){
    int i;
    for (i = 0; i < strlen(palavraSecreta); i++){
        if (*letra == palavraSecreta[i])
            printf("%c", palavraSecreta[i]);
    }
}

int main(){
    char palavraSecreta[50], letra; 
    printf("Digite a palavra secreta: ");
    scanf("%s", palavraSecreta); 
    setbuf(stdin, NULL);
    
    printf("Digite uma letra: "); 
    scanf("%c", &letra); 
    
    verificarCaractereNaPalavraSecreta(palavraSecreta, &letra);  
    
    

    return 0;
}

 9) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva uma função que receba um vetor de tamanho N dessa estrutura.
Essa função deve retornar o índice do aluno que possui a maior média geral entre
todos os alunos.
 
#include <stdio.h>

struct aluno{
    char nome[50];
    int matricula;
    float notas[3];
};

int descobrirMaiorMedia (float *medias){
    float maior;
    int i, indice; 
    
    maior = medias[0];
    indice = 0; 
    for (i = 0; i < 3; i++){
        if (maior < medias[i]){
            maior = medias[i];
            indice = i; 
        }
    }
    return indice;
}

int calcularMedia (struct aluno *funcAlunos, int funcQtoAlunos){
    int i, j, indiceMaiorMedia;
    float media[3], soma = 0; 
    
    for (i = 0; i < funcQtoAlunos; i++){
        for (j = 0; j < 3; j++){
            soma += funcAlunos[i].notas[j]; 
        }
        media[i] = soma / 3; 
        soma = 0;
    }
    indiceMaiorMedia = descobrirMaiorMedia(media);
    return indiceMaiorMedia; 
}

void coletarDados(struct aluno *funcAlunos, int funcQtoAlunos){
    int i, j; 
    
    for (i = 0; i < funcQtoAlunos; i++){
        printf("Nome do aluno %d: ", i+1);
        setbuf(stdin,NULL);
        scanf("%s", funcAlunos[i].nome);
        printf("Digite o numero da matricula do aluno %s: ", funcAlunos[i].nome);
        scanf("%d", &funcAlunos[i].matricula);
        printf("Informe suas notas:\n"); 
        for (j = 0; j < 3; j++){
            scanf("%f", &funcAlunos[i].notas[j]);
        }
    }
}

int main(){
    int recebeIndiceMaiorMedia, qtoAlunos;
    printf("Quantos alunos voce irá cadastrar: ");
    scanf("%d", &qtoAlunos);
    struct aluno alunos[qtoAlunos];
    
    printf("Informe os dados dos alunos\n");
    coletarDados(alunos, qtoAlunos);
    printf("Calcula media das notas e retorna que teve a maior média:\n"); 
    recebeIndiceMaiorMedia = calcularMedia(alunos, qtoAlunos);
    printf("Aluno com maior media é o %s", alunos[recebeIndiceMaiorMedia].nome);
  
    return 0;
}

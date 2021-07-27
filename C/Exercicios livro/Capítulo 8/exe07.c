7) Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posições dessa estrutura e imprima a maior hora.

#include <stdio.h>

struct horas{
    int hora, minuto, segundo;
};

int main(){
    
    struct horas coletaHorario[3];
    int i,  recebeIndice; 
    float horarioEmDecimal[3], horarioMaior;
    
    for (i = 0; i < 3; i++){
        printf("Horario %d\n", i+1 );
        printf("Digite a hora: ");
        scanf("%d", &coletaHorario[i].hora);
        printf("Digite os minutos: ");
        scanf("%d", &coletaHorario[i].minuto);
        printf("Digite os segundos: ");
        scanf("%d", &coletaHorario[i].segundo);
    }
    // converte o horário em formato padrão, para horas em formato ponto flutante/decimal/ com vírgula
    for (i = 0; i < 3; i++){
        horarioEmDecimal[i] = coletaHorario[i].hora + (coletaHorario[i].minuto / 60.0) + (coletaHorario[i].segundo / 3600.0);
    }
    // descobre qual é o maior horário
    horarioMaior = horarioEmDecimal[0];
    for (i = 0; i < 3; i++){
        if (horarioEmDecimal[i] > horarioMaior){
            horarioMaior = horarioEmDecimal[i]; 
            recebeIndice = i; // recebe o numero do loop onde está o horarioMaior, que servirá como indice.
        }
    }
    printf("\n");
    printf("Maior hora =  %d:%d:%d", coletaHorario[recebeIndice].hora, coletaHorario[recebeIndice].minuto, coletaHorario[recebeIndice].segundo); 
    
    return 0;
}

#include <stdio.h>

int main(){

    int inicio, fim, duracao;

    printf("Digite a hora de inicio da partida:\n");
    scanf("%d", &inicio);
    printf("Agora digite a hora de fim da partida:\n");
    scanf("%d", &fim);

    

    if(inicio<fim){
        duracao=inicio-fim;

    }
    else{
        duracao=(24-inicio)+fim;
    }

    printf("A duracao da partida foi de %d horas", duracao);

    return 0;
}
#include <stdio.h>

int main(){

    int quantidade_atual, quantidade_maxima, quantidade_minima, quantidade_media;

    printf("Qual a quantidade atual do produto em estoque?\n");
    scanf("%d", &quantidade_atual);
    printf("Qual a quantidade maxima permitida?\n");
    scanf("%d", &quantidade_maxima);
    printf("Qual a quantidade minima?\n");
    scanf("%d", &quantidade_minima);

    quantidade_media = (quantidade_maxima + quantidade_minima)/2;

    if(quantidade_atual >= quantidade_media){
        printf("Nao efetuar compra");
    }
    else{
        printf("Efetuar compra");
    }

    return 0;
}
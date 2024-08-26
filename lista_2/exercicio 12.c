#include <stdio.h>

int main(){
    
    int numero_da_conta;
    float saldo, debito, credito, saldo_atual;

    printf("Qual o numero da sua conta e o saldo nela contido?\n");
    scanf("%d %f", &numero_da_conta, &saldo);
    printf("Qual o valor do debito feito pelo(a) sr(a)?\n");
    scanf("%f", &debito);
    printf("E quanto ao credito?\n");
    scanf("%f", &credito);

    saldo_atual = saldo - debito + credito;

    if(saldo_atual>0){
        printf("O seu saldo atual eh positivo com %.1f reais", saldo_atual);
    }
    else if(saldo_atual==0){
        printf("O seu saldo atual eh nulo com %.1f reais", saldo_atual);
    }
    else{
        printf("O seu saldo atual eh negativo com %.1f reais", saldo_atual);
    }


    return 0;

    
}
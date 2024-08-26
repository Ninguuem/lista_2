#include <stdio.h>

int main(){

    int qtdmacas;
    float valoru;

    printf("Se forem compradas a unidade cada maca custa $1.30 mas se forem compradas uma duzia $1 cada se forem compradas pelo menos uma duzia\n");
    printf("Digite a quantidade de macas que deseja comprar:\n");
    scanf("%d", &qtdmacas);

    if(qtdmacas>=12){
        valoru=qtdmacas*1;
        printf("O valor das macas eh %.1f", valoru);
    }
    else if(qtdmacas<12){
        valoru=qtdmacas*1.30;
        printf("O valor das macas eh %.1f", valoru);
    }

    return 0;
}
#include <stdio.h>

int main(){

    float salario_fixo, valor_vendas, comissaoE, salario_final;

    printf("Qual o valor do seu salario fixo?\n");
    scanf("%f", &salario_fixo);
    printf("E qual o valor das suas vendas no mes?\n");
    scanf("%f", &valor_vendas);

    if(valor_vendas > 1500){
        comissaoE = 1500 * 0.03;
        comissaoE += (valor_vendas - 1500) * 0.05;
    }
    else{
        comissaoE = valor_vendas * 0.03;
    }

    salario_final = salario_fixo + comissaoE;

    printf("O seu salario total do mes eh de %.1f reais", salario_final);


    return 0;
}
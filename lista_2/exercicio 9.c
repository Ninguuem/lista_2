#include <stdio.h>

int main(){

    float sal, salf;
    int horas, extras;

    printf("Digite a quantidade de horas trabalhadas no mes:\n");
    scanf("%d", &horas);
    printf("Agora, digite a quantidade que voce ganha por hora trabalhada:\n");
    scanf("%f", &sal);
    


    if(horas>160){
        extras=horas-160;
        salf=(160*sal)+(extras*sal*1.5);
        
    }
    else{
        salf=horas*sal;

    }

    printf("O salario do mes eh de %.1f reais", salf);

    return 0;


}
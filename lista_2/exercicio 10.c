#include <stdio.h>

int main(){

    float altura, peso_ideal;
    int sexo;

    printf("Qual a sua altura?\n");
    scanf("%f", &altura);
    printf("Voce eh do sexo masculino ou feminino?(digite 1 para masculino e 0 para feminino)\n");
    scanf("%d", &sexo);

    if(sexo==1){
        peso_ideal=(72.7*altura)-58;
    }
    else{
        peso_ideal=(62.1*altura)-44.7;
    }

    printf("O seu peso ideal de acordo com o seu sexo e a sua altura eh de %.1fkg", peso_ideal);


    return 0;
}
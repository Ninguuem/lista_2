#include <stdio.h>

int main(){

    int anon, anoa, idade;

    printf("Digite o ano de seu nascimento:\n");
    scanf("%d", &anon);
    printf("Agora digite o ano atual:\n");
    scanf("%d", &anoa);

    idade=anoa-anon;

    if(idade>=16){
        printf("Voce podera votar esse ano");
    }
    else{
        printf("Voce nao podera votar esse ano");
    }

    return 0;
}
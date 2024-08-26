#include <stdio.h>

int main(){

    int n;

    printf("Digite um valor inteiro\n");
    scanf("%d", &n);

    if(n>=0){
        printf("O valor digitado eh positivo");
    }
    else{
        printf("O valor digitado eh negativo");
    }

    return 0;
}
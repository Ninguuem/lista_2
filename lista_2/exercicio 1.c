#include <stdio.h>

int main(){

    int n;

    printf("Digite um valor inteiro\n");
    scanf("%d", &n);

    if(n>=10){
        printf("Eh maior ou igual a 10!");
        
    }
    else{
        printf("Nao e maior do que 10!");
    }

    return 0;
}
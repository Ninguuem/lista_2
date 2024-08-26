#include <stdio.h>

int main(){

    int n, n2;

    printf("Digite dois valores inteiros para comparar qual o maior deles:\n");
    scanf("%d %d", &n, &n2);

    if(n>n2){
        printf("%d eh maior do que %d", n, n2);
    }
    else if(n2>n){
        printf("%d eh maior do que %d", n2, n);
    }

    return 0;
}
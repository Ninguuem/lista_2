#include <stdio.h>

int main(){

    int n, n2;

    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &n, &n2);

    if(n>n2){
        printf("%d %d", n, n2);
    }
    else if(n2>n){
        printf("%d %d", n2, n);
    }

    return 0;
}
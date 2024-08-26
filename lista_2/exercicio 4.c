#include <stdio.h>

int main(){

    float n1, n2, media;

    printf("Digite as notas de sua primeira prova e da segunda nessa ordem:\n");
    scanf("%f %f", &n1, &n2);

    media=(n1+n2)/2;

    if(media>=7){
        printf("O aluno foi aprovado! Com a media de %.1f pontos", media);
    }
    else{
        printf("O aluno foi reprovado. Com a media de %.1f pontos", media);
    }

    return 0;

}
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int nota[35];
    int n;
    float media;

    srand(time(NULL));

    for(n=0; n<35; n++){
        nota[n] = rand() % 10 + 1;
        printf("\nAluno %d: %d", n+1, nota[n]);
    }

    for(n=0; n<35; n++){
        media+=nota[n];
    }

    media = media/35;
    printf("\n\nMedia da turma: %.2f", media);

    return 0;
}
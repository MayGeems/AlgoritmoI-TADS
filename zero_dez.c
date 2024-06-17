#include <stdio.h>
#include <math.h>

int main(void){

    int x;

    for(x=0;x<=10;x+=3){
        if(x%3==0){
            printf("%d\t", x);
        }
    }
    return 0;
}
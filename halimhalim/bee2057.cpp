#include<stdio.h>

int main(){
    int S, T, F;

    scanf("%d %d %d", &S, &T, &F);

    int r = ((S+T+F)%24+24)%24;
    printf("%d\n", r);

    return 0;
}
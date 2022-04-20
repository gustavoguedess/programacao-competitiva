#include<stdio.h>

int main(){
    int c, fg1, fg2, fg3;
    int g1, g2, g3;
    int t;

    while(scanf("%d %d %d %d", &c, &fg1, &fg2, &fg3)){
        if(!c && !fg1 && !fg2 && !fg3) break;
        g1 = (c-fg1+40)%40;
        g2 = (fg2-fg1+40)%40;
        g3 = (fg2-fg3+40)%40;
        t = (120+g1+g2+g3)*9;
        printf("%d\n", t);
    }

    return 0;
}
#include<stdio.h>

int main(){
    int t, d;
    int rating;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &rating);
        if(rating<1400) d=4;
        else if(rating<1600) d=3;
        else if(rating<1900) d=2;
        else d=1;
        printf("Division %d\n", d);
    }
    return 0;
}
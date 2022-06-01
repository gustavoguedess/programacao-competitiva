#include<stdio.h>

int main(){
    int a, b;
    int n, r;

    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &a, &b);
        if(a==0) r=1;
        else r=2*b+a+1;
        printf("%d\n", r);
    }
}
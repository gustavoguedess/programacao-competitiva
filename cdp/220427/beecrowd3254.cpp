#include<stdio.h>

int main(){
    int n;
    int p, r;
    int acm;

    acm=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d",&p);
        acm+=p*i;
    }
    r=0;
    for(int i=1; acm>0; acm-=i,r++, i++);
    printf("%d\n", r);
    return 0;
}
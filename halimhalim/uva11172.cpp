#include<stdio.h>

int main(){
    int t=0;
    long long a, b;

    scanf("%d", &t);
    while(t--){
        scanf("%lld %lld", &a, &b);
        printf("%c\n",a<b?'<':a==b?'=':'>');
    }
    return 0;
}
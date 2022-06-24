#include<stdio.h>

int main(){
    int n;
    int t, v;
    long long s;
    s=0;
    scanf("%d", &n);

    while(n--){
        scanf("%d %d", &t, &v);
        s+=(t*v);
    }
    printf("%lld\n", s);

}
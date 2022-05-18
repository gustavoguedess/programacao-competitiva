#include<stdio.h>

int main(){
    int v[55];
    int n, a;
    scanf("%d", &n);
    for(int i=0; i<54; i++) v[i]=0;
    for(int i=1; i<=n; i++){
        scanf("%d", &a);
        v[i-1]+=a;
        v[i]+=a;
        v[i+1]+=a;
    }
    for(int i=1; i<=n; i++)
        printf("%d\n", v[i]);
}
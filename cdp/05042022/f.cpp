#include<stdio.h>
#define MAX 1123456

int f[MAX];

int top(int a){
    if(f[a]==a) return a;
    return f[a]=top(f[a]);
}
void _union(int a, int b){
    if(top(a)>top(b)) f[a]=top(b);
}
int main(){
    int n, m;
    int a, b;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++) f[i]=i;
    while(m--){
        scanf("%d %d", &a, &b);
        if(a!=n && b!=n) _union(a, b);
    }
    for(int i=0; i<n; i++) printf("%c", top(i)==n-1?'A':'B');
    printf("\n");
    return 0;
}
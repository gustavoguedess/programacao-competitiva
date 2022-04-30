#include<stdio.h>
#define MAX 11234

int main(){
    int n, r, v[MAX];
    int a, p;

    while(scanf("%d", &n), n!=0){
        for(int i=0;i<n; i++) scanf("%d", &v[i]);
        r=0;
        for(int i=0;i<n; i++){
            a = ((i-1)%n+n)%n;
            p = (i+1)%n;
            if(v[a] > v[i] && v[p] > v[i]) r++;
            else if(v[a] < v[i] && v[p] < v[i]) r++;
        }
        printf("%d\n", r);
    }
    return 0;
}
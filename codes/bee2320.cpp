#include<stdio.h>
#define MAX 112345

int v[MAX];

int main(){
    int n;
    int s=0;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
        s+=v[i];
    }
    s/=2;
    for(int i=0; i<n; i++){
        if(v[i]==s){
            printf("%d\n", i+1);
        }
        v[i+1]+=v[i];
    }
}
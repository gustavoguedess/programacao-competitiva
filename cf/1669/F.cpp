#include<stdio.h>
#define MAX 1123456

int v[MAX];

int main(){
    int t, n, i;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int a=0;
        int b=0;
        int resp=0;
        for(int i=0; i<n; i++) scanf("%d", &v[i]);
        int i=0, j=0;
        
        while(i<n-j){
            if(a<b) a+=v[i++];
            else b+=v[n-1-j++];
            //printf("%d %d\n", i, j);
            if(a==b) resp=i+j;
        }

        printf("%d\n", resp);
    
    }
    return 0;
}
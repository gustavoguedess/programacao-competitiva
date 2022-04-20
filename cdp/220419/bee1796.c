#include<stdio.h>

int main(){
    int n;
    int a, tmp;

    a=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &tmp);
        a+=!tmp;
    }
    printf("%c\n", a>n/2?'Y':'N');

    return 0;
}
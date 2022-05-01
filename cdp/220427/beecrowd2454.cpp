#include<stdio.h>

int main(){
    int p, r;

    scanf("%d %d", &p, &r);
    char resp;
    if(p==0) resp='C';
    else if(r==0) resp='B';
    else resp='A';

    printf("%c\n", resp); 
    return 0;
}
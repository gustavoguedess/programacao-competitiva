#include<stdio.h>

int main(){
    char c;
    int b=1, i=1;

    while(scanf("%c", &c)!=EOF){
        if(c!='_' && c!='*') printf("%c",c);
        if(c=='_'){ printf("<%si>", i?"":"/"); i=!i;}
        if(c=='*'){ printf("<%sb>", b?"":"/"); b=!b;}
    }
    printf("\n");
    return 0;
}
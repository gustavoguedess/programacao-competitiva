#include<stdio.h>

char valor(int a){
    if(a>='A' && a<='Z') return a-'A';
    return a-'a';
}
int igual(char a, char b){
    return valor(a)==valor(b);
}
int main(){
    char c, l=-1;
    char r='Y';
    int comp=1;

    while(scanf("%c", &c), c!='*'){
        if(l==-1) l = c;
        if(comp){
            comp=0;
            if(!igual(c,l)) r='N';
        }
        if(c==' ') comp=1;
        if(c=='\n'){
            printf("%c\n", r);
            l=-1;
            r='Y';
            continue;
        }

    }
    return 0;
}
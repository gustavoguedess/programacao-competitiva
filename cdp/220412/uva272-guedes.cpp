#include<stdio.h>

int main(){
    int band=0;
    char c;

    while(scanf("%c", &c)!=EOF){
        if(c=='"' && band==0){
            printf("``");
            band=1;
        }
        else if(c=='"' && band==1){
            printf("''");
            band=0;
        }
        else printf("%c",c);
    }
    
    return 0;
}
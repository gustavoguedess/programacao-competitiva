#include<stdio.h>
#include<string.h>
#define MAX 11234
int main(){
    int n, c, t;
    char s[MAX];
    int alpha[30];
    scanf("%d\n", &n);
    while(n--){
        for(int i=0; i<27; i++) alpha[i]=0;
        c=0;
        fgets(s, MAX, stdin);
        t = (int)strlen(s);
        s[--t]='\0';
        //printf(">%s\n", s);
        for(int i=0; i<t; i++) alpha[s[i]-'A']=1;

        for(int j=0; j<2; j++){
            fgets(s, MAX, stdin);
            t = (int)strlen(s);
            s[--t]='\0';
            //printf(">>%s\n", s);
            for(int i=0; i<t; i++){ 
                alpha[s[i]-'A']-=1;
                if(alpha[s[i]-'A']<0) c=1;
            }
        }

        if(c) printf("CHEATER");
        else for(int i=0; i<27; i++) if(alpha[i]) printf("%c", 'A'+i);
        printf("\n");
    }
}
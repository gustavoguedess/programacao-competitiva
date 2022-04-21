#include<stdio.h>

int main(){
    int r, b;
    int t, n;
    int qt;
    int resp = 1;
    char c;

    scanf("%d", &t);
    while(t--){
        scanf("%d ", &n);
        r=b=qt=0;
        resp=1;
        for(int i=0; i<n; i++){
            scanf("%c", &c);
            if(c=='R') r++;
            if(c=='B') b++;
            //printf("%c %d %d\n", c, r, b);
            if(c=='W' && (r<1 || b<1) && r+b>0) resp=0;
            if(c=='W') r=b=0;
        }
        if((r<1 || b<1)  && r+b>0) resp=0;
        printf("%s\n", resp?"YES":"NO");
    }
    return 0;
}
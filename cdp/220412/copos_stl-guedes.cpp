#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    int n;
    int o;
    char ch;

    scanf("%d", &n);
    scanf(" %c", &ch);
    a = b = c = 0;
    if(ch=='A') a=1;
    else if(ch=='B') b=1;
    else c=1;

    for(int i=0; i<n; i++){
        scanf("%d", &o);
        if(o==1) swap(a,b);
        else if(o==2) swap(b,c);
        else swap(a,c);
    }
    printf("%c\n", a?'A':b?'B':'C');
    return 0;
}
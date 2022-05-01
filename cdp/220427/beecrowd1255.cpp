#include<stdio.h>
#include<iostream>


int tonum(int a){
    if(a>='A' && a<='Z') return a-'A';
    if(a>='a' && a<='z') return a-'a';
    return 29;
}
int main(){
    
    int n, m, a;
    int alpha[30];
    std::string t;

    scanf("%d ", &n);
    while(n--){
        getline(std::cin, t);
        //std::cout << t << std::endl;
        m=0;
        for(int i=0; i<30; i++)alpha[i]=0;

        for(int i=0; i<t.length(); i++){
            a = tonum(t[i]);
            alpha[a]++;
            //printf("%c %d\n", t[i], alpha[a]);
            if(alpha[a]>m && a<26)m=alpha[a];
        }
        for(int i=0; i<26; i++)
            if(alpha[i]==m) printf("%c", i+'a');
        printf("\n");
    }
}
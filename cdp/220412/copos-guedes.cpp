#include<stdio.h>
int v[5];

void troca(int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

int main(){
    int n;
    int o;
    char c;

    scanf("%d", &n);
    scanf(" %c", &c);
    v[0] = v[1] = v[2] = 0;
    v[c-'A']=1;

    for(int i=0; i<n; i++){
        scanf("%d", &o);
        if(o==1) troca(0,1);
        else if(o==2) troca(1,2);
        else troca(0,2);
    }

    if(v[0]==1) printf("A\n");
    if(v[1]==1) printf("B\n");
    if(v[2]==1) printf("C\n");

    //printf("%c\n", v[0]?'A':(v[1]?'B':'C'));
    return 0;
}
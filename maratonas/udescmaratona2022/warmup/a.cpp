#include<bits/stdc++.h>
#define MAX 212345

using namespace std;

vector<bitset<MAX>> mat;
int _p[MAX]; 
vector<int> ord;
int r;

int pai(int f){
    if(f==_p[f]) return f;
    return _p[f]=pai(_p[f]);
}

int main(){
    int n, m, q;
    int a, b;
    scanf("%d %d %d", &n, &m, &q);

    for(int i=0; i<=n; i++) _p[i]=i;
    for(int i=0; i<=n; i++){
        ord.push_back(0);
        bitset<MAX> tmp=0;
        tmp=~tmp;
        mat.push_back(tmp);
    }
    while(m--){
        scanf("%d %d", &a, &b);
        mat[a][b]=0;
        mat[b][a]=0;
    }
    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(mat[i][j])
                _p[pai(i)]=_p[pai(j)]=min(pai(i),pai(j));
    for(int i=1; i<=n; i++)
        ord[pai(i)]++;
        
    sort(ord.begin(),ord.end(), greater<int>());
    for(int i=1; i<n; i++)
        ord[i]+=ord[i-1];

    while(q--){
        scanf("%d", &a);
        printf("%d\n", ord[a-1]);
    }
}
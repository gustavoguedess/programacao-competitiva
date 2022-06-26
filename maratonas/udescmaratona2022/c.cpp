#include<bits/stdc++.h>
#define MAX 2123456
using namespace std;

int v[MAX];
set<int> s;
int n;
void _sieve(int p){
    if(p>n) return;
    for(auto& x: s){
        if(x*p<=n){
            v[x*p]--;
            s.insert(x*p);
        }
    }
}

int main(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        v[i]=i-1;
    }
    int r=0;
    for(int i=2; i<=n; i++){
        if(i==v[i]+1){
            s.insert(i);
            _sieve(i);
        }
        cout << i << " " << v[i] << endl;

        r=(r+v[i])%int(1e9+7);
    }

    printf("%d\n", r);
}
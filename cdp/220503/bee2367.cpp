#include <bits/stdc++.h>

using namespace std;

#define MAXN 1123456
#define MAXM 1123

int ch[MAXN] = {}, x[MAXN] = {};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    int l = 0;
    for(int i = 1; i <= n; i++){
        if(i <= l + m) ch[i]++;
        if(x[i] == 0) x[i] = i - l;
        if(ch[i] == 1) { ch[i+x[i]]++; x[i+x[i]] = x[i];}
        if(ch[i] == 0) l = i;
    }
    if(ch[n] == 0) cout << "Carlos" << endl;
    else cout << "Paula" << endl;
}
#include<bits/stdc++.h>
#define MAX 11234
using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    string fnc;
    int r=0;
    map<int, int> m;

    cin >> fnc;

    r=0;
    for(int i=0; i<int(fnc.size()); i++){
        if(fnc[i]=='('){
            int l=0;
            m.clear();
            while(fnc[++i]!=')'){
                char v = fnc[i]*(fnc[i-1]=='~'?-1:1);
                if(fnc[i]!='(' && 
                    fnc[i]!='|' && 
                    fnc[i]!='^' && 
                    fnc[i]!='~' && 
                    fnc[i]!='&' && m.count(v)!=1){
                        m[v]=1;
                        l++;
                    }
            }
            r = max(r,l);
        }
    }
    if(r>3) r=3;
    printf("%d-SAT\n", r);
}
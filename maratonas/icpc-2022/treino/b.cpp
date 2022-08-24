#include<bits/stdc++.h>

using namespace std;
int main(){
    set<int> m;
    int t;
    string s;
    int tot;

    cin >> t;
    while(t--){
        tot = 1;
        m.clear();
        cin >> s;
        for(int i=0; i<(int)s.length(); i++){
            m.insert(s[i]);
            if(m.size()>3){
                tot++;
                m.clear();
                m.insert(s[i]);
            }
        }
        cout << tot << "\n";
    }
}
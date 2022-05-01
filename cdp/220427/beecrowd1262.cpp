#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    int n, p, r;
    string s;
    while(getline(cin, s)){
        cin >> n;
        cin.ignore();
        p=0;
        r=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='R'){
                if(p==0) r++; //RRRRRRRRRR
                p=(p+1)%n;
            }
            else if(s[i]=='W'){ r++; p=0;}
            //cout << s[i] << " " << r << " " << p << endl;
        }
        cout << r << endl;
    }
}
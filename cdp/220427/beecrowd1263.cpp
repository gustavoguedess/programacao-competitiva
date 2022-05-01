#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    string l;
    char u;
    int f;
    int r;
    int p;
    while(getline(cin, l)){
        //cout << l.length() << endl;
        r=0;
        f=1;
        u=-1;
        p=0;
        for(int i=0; i<l.length(); i++){
            if(f && l[i]!=' '){
                if(u==tolower(l[i]) && p){ r++;p=0;}
                else if(u!=tolower(l[i])){ u=tolower(l[i]);p=1;}
                f=0;
            }
            if(l[i]==' ') f=1;
        }
        cout << r << endl;
    }
}
#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string l;
    int n, o;

    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, l);
        o=1;
        for(int i=0; i<l.length(); i++){
            if(o && l[i]!=' '){
                cout << l[i];
                o=0;
            }
            if(l[i]==' ')o=1;

        }
        cout << endl;
    }

}
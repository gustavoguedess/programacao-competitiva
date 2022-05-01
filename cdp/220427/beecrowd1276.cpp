#include<iostream>

using namespace std;

int tonum(int a){
    if(a>='a' && a<='z') return a-'a';
    if(a>='A' && a<='Z') return a-'A';
    return 29;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, u, i, j, virgula;
    string l;
    int alpha[50];
    while(getline(cin, l)){
        for(int i=0; i<30; i++)alpha[i]=0;
        for(int i=0; i<l.length(); i++){
            a = tonum(l[i]);
            if(a<27)alpha[a]++;
        }
        virgula=0;
        for(int i=0; i<26; i++){
            if(alpha[i]>0){
                int j=i;
                while(alpha[j+1]>0 && j<25) j++;
                if(virgula) cout << ", ";
                cout << (char)('a'+i) << ':' << (char)('a'+j);
                virgula=1;
                i = j;
            }
        }
        cout << endl;
    }   

}
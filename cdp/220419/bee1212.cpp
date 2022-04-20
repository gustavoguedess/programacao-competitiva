#include <bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string p1, p2;

    int i, j, qt, c;
    while(cin >> p1 >> p2, p1!="0" || p2!="0"){
        i = p1.size()-1;
        j = p2.size()-1;
        qt=0;
        c=0;
        while(i>=0 && j>=0){
            int np1 = p1[i]-'0';
            int np2 = p2[j]-'0';
            if(np1+np2+c>=10){
                c = (np1+np2+c)/10;
                qt++;
            }
            else c=0;
            i--; j--;
        }
        while(i>=0){
            int np1 = p1[i]-'0';
            if(np1+c>=10){
                c = (np1+c)/10;
                qt++;
            }
            else c=0;
            i--;
        }
        
        while(j>=0){
            int np2 = p2[j]-'0';
            if(np2+c>=10){
                c = (np2+c)/10;
                qt++;
            }
            else c=0;
            j--;
        }

        if(qt>=2) cout << qt << " carry operations." << endl;
        if(qt==1) cout << qt << " carry operation." << endl;
        if(qt==0) cout << "No carry operation." << endl;
    }
    return 0;
}
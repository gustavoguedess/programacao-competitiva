#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    long long fib[1523];
    string in;

    fib[0] = 0;
    fib[1] = 1;
    for(int i=2; i<1500; i++){
        fib[i] = fib[i-1] + fib[i-2];
        fib[i]%=1000;
    }

    cin >> t;
    while(t--){
        cin >> in;
        n=0;
        for(int i=0; i<in.size(); i++){
            n*=2;
            n+=in[i]-'0';
            n%=1500;    
        }
        if(fib[n]<100) cout << 0;
        if(fib[n]<10) cout << 0;
        cout << fib[n] << endl;
    }
    return 0;
}
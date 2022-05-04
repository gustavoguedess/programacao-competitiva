#include<bits/stdc++.h>
#define MAX 112345

using namespace std;

char T[MAX];
int SA[MAX], n;

int cmp(int a, int b) {return strcmp(T+a, T+b)<0;}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;
    n = strlen(T);

    for (int i=0; i<n; i++) SA[i]=i;
    sort(SA, SA+n, cmp);

    for (int i=0; i<n; i++) cout << SA[i] << " ";
    cout << endl;
    for (int i=0; i<n; i++) cout << T+SA[i] << endl;

}
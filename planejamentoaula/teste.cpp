#include<bits/stdc++.h>
#define MAX 1123
#define xx first
#define yy second

using namespace std;

int main(){
    pair<int,int> p[MAX];
    int n;
    int x,y;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        p[i] = make_pair(x,y);
    }
    for(int i=0; i<n; i++) cout << p[i].xx << " " << p[i].yy << endl;
    return 0;
}
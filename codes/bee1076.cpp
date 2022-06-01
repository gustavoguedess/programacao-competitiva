#include<bits/stdc++.h>
#define MAX 11

using namespace std;

typedef pair<int,int> ii;
typedef set<ii> sii;

sii r;

int main(){
    int n,t;
    int v, a;
    int u1, u2;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        scanf("%d %d", &v, &a);
        r.clear();
        for(int i=0; i<a; i++) {
            scanf("%d %d", &u1, &u2);
            r.insert(ii(u1,u2));
            r.insert(ii(u2,u1));
        }
        printf("%ld\n", r.size());
    }
}
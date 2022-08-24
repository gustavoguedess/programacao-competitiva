#include <bits/stdc++.h>
using namespace std;


int t;
int n, k;


int main () {
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &n, &k);
        map<int, pair<int,int>> st;
        for(int i=0; i<n; i++) {
            int x;
            scanf("%d", &x);
            if (st.find(x)==st.end()) st[x]={212345, -1};
            
            st[x].first = min(i, st[x].first);
            st[x].second = max(i, st[x].second);
        }

        while (k--) {
            int a, b;
            scanf("%d %d", &a, &b);
            if (st.find(a)!=st.end() && st.find(b)!=st.end() && st[a].first <= st[b].second) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int t;
int p;

char w[212345];

int main () {
    scanf("%d", &t);
    while (t --> 0) {
        priority_queue<pair<int, int>> q;
        set<int> s;

        scanf(" %s", w);
        scanf("%d", &p);
        int i = 0;
        int v = 0;
        while (w[i]) {
            v += w[i] - 'a' + 1;
            q.push({w[i] - 'a'+1, i});
            ++i;
        }
        while (v > p && !q.empty()) {
            s.insert(q.top().second);
            v -= q.top().first;
            q.pop();
        }
        i = 0;
        while (w[i]) {
            if (s.count(i) == 0) {
                printf("%c", w[i]);
            }
            ++i;
        }
        printf("\n");
    }
}
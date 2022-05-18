#include<bits/stdc++.h>
#define toi(c) c-'a'

using namespace std; 

struct node{
    int nxt[30];
    int term;
    node() {memset(nxt, -1, sizeof(nxt)); term=0;}
};
vector<node> tree;
int ans;

void ins(char s[]){
    int u = 0;
    int flag=1;
    for(int i=0; s[i]; i++){
        int c = toi(s[i]);
        if(tree[u].nxt[c]==-1){
            tree[u].nxt[c] = tree.size();
            tree.emplace_back();
            flag=0;
        }
        ans|=tree[u].term;
        u = tree[u].nxt[c];
    }
    ans|=flag;
    tree[u].term = 1;
}

int main(){
    char s[112];
    int n;

    while(scanf("%d", &n), n){
        ans=0;
        tree.clear();
        tree.emplace_back();
        while(n--){
            scanf("%s", s);
            if (!ans) ins(s);
        }
        if(!ans) printf("Conjunto Bom\n");
        else printf("Conjunto Ruim\n");
    }
}
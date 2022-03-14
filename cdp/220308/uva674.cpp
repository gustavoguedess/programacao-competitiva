#include<bits/stdc++.h>

int coins[] = {50,20,10,5,1};
long long memo[7500][6];

int dp(int c, int i){
    if(c==0) return 1;
    if(c<0 || i==5) return 0;
    if(memo[c][i]!=-1) return memo[c][i];
    return memo[c][i] = dp(c-coins[i],i)+dp(c, i+1);
}
int main(){
    int c;
    while(scanf("%d", &c)!=EOF){
        memset(memo, -1, sizeof(memo));
        int t=dp(c, 0);
    }
    return 0;
}
#include<bits/stdc++.h>
#define MAX 112
#define _ra(i) i<n?ra[i]:0

using namespace std; 

typedef pair<int, int> ii;
string s;
int sa[MAX], ra[MAX], tmp[MAX];
int k, n;
bool cmp(int a, int b){
    return ii(ra[a],_ra(a+k))<ii(ra[b], _ra(b+k));
}
void compute_sa(){
    for(int i=0; i<n; i++) {sa[i]=i; ra[i]=s[i];}
    for(k=1; k<n; k<<=1){
        sort(sa, sa+n, cmp);
        tmp[0]=0;
        for(int i=1; i<n; i++){
            tmp[sa[i]]=tmp[sa[i-1]];
            if(ii(ra[sa[i]],_ra(sa[i]+k))
                  !=ii(ra[sa[i-1]],_ra(sa[i-1]+k)))
                tmp[sa[i]]++;
        }
        for(int i=0; i<n; i++) ra[i]=tmp[i];
    }
}
int phi[MAX], plcp[MAX], lcp[MAX];
void compute_lcp(){
    int L=0;
    phi[sa[0]]=-1;
    for(int i=1; i<n; i++) phi[sa[i]]=sa[i-1];
    for(int i=0; i<n; i++){
        if(phi[i]==-1){plcp[i]=0; continue;}
        while(s[i+L]==s[phi[i]+L]) L++;
        plcp[i] = L;
        L = max(L-1, 0);
    }
    for(int i=0; i<n; i++) lcp[i] = plcp[sa[i]];
}

int owner[MAX];
int lcs(){
    int m=0;
    for(int i=1; i<n; i++)
        if(owner[sa[i]]!=owner[sa[i-1]]) 
            m = max(m,lcp[i]);
    return m;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s1, s2;
    int r, n1;

    while(getline(cin, s1)){
        getline(cin, s2);
        s = s1+"$"+s2+"#";
        n = s.length();
        
        compute_sa();
        compute_lcp();
        n1 = s1.length();
        for(int i=0; i<n; i++) owner[i] = i<n1?1:2;
        r = lcs();
        cout << r << endl;
    }
}
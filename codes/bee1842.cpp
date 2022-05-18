#include<bits/stdc++.h>

#define MAX 112345
#define _ra(i) i<n?ra[i]:0

using namespace std;
typedef pair<int,int> ii;

string s;
int n;
int k;
int sa[MAX], ra[MAX], tmp[MAX];

bool cmp(int a, int b){
    return ii(ra[a],_ra(a+k))<ii(ra[b],_ra(b+k));
}

void build_sa(){
    for(int i=0; i<n; i++){sa[i]=i;ra[i]=s[i];}
    for(k=1; k<n; k<<=1){
        sort(sa, sa+n, cmp);
        tmp[sa[0]]=0;
        for(int i=0; i<n; i++){
            tmp[sa[i]] = tmp[sa[i-1]];
            if(ii(ra[sa[i]], _ra(sa[i]+k))!=ii(ra[sa[i-1]], _ra(sa[i-1]+k)))
                tmp[sa[i]]++;
        }
        for(int i=0; i<n; i++) ra[i]=tmp[i];
    }
}

int lcp[MAX], plcp[MAX], phi[MAX];
void compute_lcp(){
    int L=0;
    phi[sa[0]]=-1;
    for(int i=1; i<n; i++)phi[sa[i]]=sa[i-1];
    for(int i=0; i<n; i++){
        if(phi[i]==-1) {plcp[i]=0; continue;}
        while(s[i+L]==s[phi[i]+L]) L++;
        plcp[i]=L;
        L = max(L-1,0);
    }
    for(int i=0;i<n; i++) lcp[i]=plcp[sa[i]];
}
int lrs(){
    int m=0;
    for(int i=0; i<n; i++) m = max(m,lcp[i]);
    return m;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> s;
    s+="#";
    n = (int)s.length();
    build_sa();compute_lcp();
    //for(int i=0; i<n;i++)
    //    cout << &s[sa[i]] << endl;
    
    int r = lrs();

    for(int i=0; i<n; i++){
        if(r<3){
            cout << "*\n";
            break;
        }
        if(lcp[i]==r){
            s[sa[i]+r]='\0';
            cout << &s[sa[i]] << endl;
            break;
        }
    }
}
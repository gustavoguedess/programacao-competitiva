#include<bits/stdc++.h>
#define MAX 11234567
#define _ra(i) i<n?ra[i]:0

using namespace std;

typedef pair<int, int> ii;
string s;
int sa[MAX], ra[MAX], tmp[MAX];
int n, k;

bool cmp(int a, int b){
    return ii(ra[a], _ra(a+k))<ii(ra[b],_ra(b+k));
}
void compute_sa(){
    for(int i=0; i<n; i++){sa[i]=i; ra[i]=s[i];}
    
    for(k=1; k<n; k<<=1){
        sort(sa, sa+n, cmp);
        tmp[sa[0]]=0;
        for(int i=1; i<n; i++){
            tmp[sa[i]]=tmp[sa[i-1]];
            if(ii(ra[sa[i]], _ra(sa[i]+k))
                    !=ii(ra[sa[i-1]], _ra(sa[i-1]+k)))
                tmp[sa[i]]++;
        }
        for(int i=0; i<n; i++) ra[i]=tmp[i];
    }
}
int lcp[MAX], phi[MAX], plcp[MAX];
void compute_lcp(){
    int L=0;
    phi[sa[0]]=-1;
    for(int i=1; i<n; i++) phi[sa[i]]=sa[i-1];
    for(int i=0; i<n; i++){
        if(phi[i]==-1){plcp[i]=0; continue;}
        while(s[i+L]==s[phi[i]+L]) L++;
        plcp[i]=L;
        L = max(L-1, 0);
    }
    for(int i=0; i<n; i++) lcp[i] = plcp[sa[i]];
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s1;
    char c;

    while(cin >> n, n){
        c='a'-1;
        s="";
        s+=c;
        c--;
        while(n--){
            cin >> s1;
            s+=s1+c;
            c--;
        }    
        n = (int) s.length();
        compute_sa(); compute_lcp();

        //cout << "\t" << s << endl;
        for(int i=0; i<n; i++) cout << "\t" << lcp[i] << " " << &s[sa[i]] << endl;
        string r = "Bom";
        for(int i=0;i<n-1; i++){
            if(s[sa[i]-1]>'z') cout << "\t\t" << &s[sa[i]] << " " << lcp[i]<< " " << s[phi[sa[i]]-1] <<endl;
            if(s[sa[i]-1]>'z' && s[sa[i]+lcp[i]]>'z' && s[phi[sa[i]]-1]>'z'){
                r="Ruim";
                //cout << "\t\t\t" << &s[sa[i]-1] << " " << lcp[i] << " " << &s[phi[sa[i]]] << endl;
            }
        }
        cout << "Conjunto " << r << endl;
    }
}
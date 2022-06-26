#include<bits/stdc++.h>
#define MAX 55
#define INF 1e9

using namespace std;
int v[MAX][MAX];
long long s[MAX];

int main(){
    int n, m;    
    scanf("%d %d", &n, &m);
    for(int y=1; y<=n; y++)
        for(int x=1; x<=m; x++)
            scanf("%d", &v[y][x]);
    /*for(int y=1; y<=n; y++){
        for(int x=1; x<=m; x++)
            printf("(%d,%d)=%d ", y, x, v[y][x]);
        printf("\n");
    }*/
    long long maior=-INF;
    int r1x, r1y, r2x, r2y;
    r1x = r1y = r2x = r2y = 0;
    tuple<int,int,int,int> t (0,0,0,0);

    for(int yi=1; yi<=n; yi++){
        for(int yj=yi; yj<=n; yj++){
            for(int xk=1; xk<=m;xk++){
                if(yi==yj) s[xk]=v[yi][xk];
                else s[xk]+=v[yj][xk];
                //if(xi==2 &&xj==2) printf("(%d,%d)=%d\n", yk,xi,v[yk][xi]);
            }
            long long acm=0;
            int lastx=1;
            for(int xk=1; xk<=m; xk++){
                acm+=s[xk];
                //if(xi==2 && xj==2) printf(" %d %d %lld   S[K]=%lld\n", xi, xj, acm, s[yk]);
                tuple<int,int,int,int> novo (yi, lastx, yj, xk);
                if(acm>maior || (acm==maior && novo<t)){ 
                    maior=acm;
                    r1x = lastx;
                    r2x = xk;
                    r1y = yi;
                    r2y = yj;
                    t = novo;
                    //printf("(%d %d)(%d %d) = %lld\n", r1y,r1x, r2y, r2x, maior);
                }
                if(acm<0){ 
                    acm=0;
                    lastx = xk+1;
                }
            }
        }
    }
    printf("%lld\n", maior);
    printf("%d %d\n", r1y, r1x);
    printf("%d %d\n", r2y, r2x);
}
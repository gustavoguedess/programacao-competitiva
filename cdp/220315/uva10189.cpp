#include<stdio.h>

int di [] = {-1,-1,-1,0,0,1,1,1};
int dj [] = {-1,0,1,-1,1,-1,0,1};

int main(){
    int n, m, i, j, k, t, c;
    char a[112][112];

    t=1;
    while(scanf("%d %d", &n, &m), n){    
        for(int i=0; i<n; i++) scanf("%s", a[i]);
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(a[i][j]=='.'){
                    int c=0;
                    for(int k=0; k<8; k++){
                        int i2 = i+di[k], j2 = j+dj[k];
                        if(i2>=0 && i2<n && j2>=0 && j2<m)
                            c+=a[i2][j2]=='*'?1:0;
                    }
                    a[i][j]=c+'0';
                }
        if(t!=1)printf("\n");
        printf("Field #%d:\n", t++);
        for(int i=0; i<n; i++)
            printf("%s\n", a[i]);
    }
    return 0;
}
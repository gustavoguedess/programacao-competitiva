#include<stdio.h>

int main(){
    int even1, odd1, even2, odd2;
    int t, n, d;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        even1=odd1=0;
        even2=odd2=0;

        while(n--){
            scanf("%d", &d);
            //printf("%d %d\t", d%2, n%2);
            if(d%2==1 && n%2==0) even1=1;
            if(d%2==1 && n%2==1) even2=1;
            if(d%2==0 && n%2==0) odd1=1;
            if(d%2==0 && n%2==1) odd2=1;
            //printf("%d %d %d %d %d %d\n", n, d, even1, odd1, even2, odd2 );
        }
        if((even1!=odd1) && (even1+odd1)+(even2+odd2)<=2) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
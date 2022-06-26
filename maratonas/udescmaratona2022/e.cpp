#include <stdio.h>

int main(){
    double ms;
    int i, n;

    scanf("%d", &n);
    for(i=0; i < n; i++){
        scanf("%lf", &ms);
        double mf = ((50 - (ms*6))/4)+0.0001;
        int d = mf*10;
        printf("%.1lf\n", d/10.0);
    }
    return 0;
}

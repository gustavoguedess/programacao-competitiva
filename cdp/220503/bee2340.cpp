#include<stdio.h>
#include<math.h>

int main(){
    float n, d, c;
    int r = -1;
    float m=0;

    scanf("%f", &n);
    for (int i=0; i<n; i++){
        scanf("%f %f", &d, &c);
        float l = log(d);
        if(m < l*c){m = l*c; r = i;}
    }
    printf("%d\n", r);
}
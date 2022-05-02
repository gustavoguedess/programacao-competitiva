#include<stdio.h>

int main(){
    double a, b;
    double r;

    scanf("%lf %lf", &a, &b);
    r = (a/100+1)*(b/100+1)-1;
    printf("%.6lf\n", r*100);
    
}
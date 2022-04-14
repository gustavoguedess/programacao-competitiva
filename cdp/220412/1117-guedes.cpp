#include<stdio.h>

int main(){
    int qt=0;
    double a;
    double n=0;

    while(qt<2){
        scanf("%lf", &a);
        if(a>=0 && a<=10){
            n+=a;
            qt+=1;
        }
        else printf("nota invalida\n");
    }
    n/=2.;
    printf("media = %.2lf\n", n);

    return 0;
}
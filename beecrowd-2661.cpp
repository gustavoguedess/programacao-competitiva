#include<stdio.h>
#include<math.h>

int main(){
    long long int n, cop;
    int qtPrimos=0;
    scanf("%lld", &n);
    cop = n;
    for(long long i=2; i*i<=cop; i++){
        if(cop%i==0){
            qtPrimos++;
            while(cop%i==0)
                cop/=i;
        }
    }
    if(cop>1)
        qtPrimos++;
    long long int total = pow(2, qtPrimos)-1-qtPrimos;
    printf("%lld\n", total);
    return 0;
}

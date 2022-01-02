#include<stdio.h>

int main(){
    int azuis, pretas, times;

    while(scanf("%d %d %d", &azuis, &pretas, &times)!=EOF){
        int porpacote = (azuis+pretas)/times;
        //printf("%d %d %d %d\n", azuis+pretas, times,azuis, pretas );
        if((azuis+pretas)%times==0 && azuis%porpacote==0 && pretas%porpacote==0) printf("sim\n");
        else printf("nao\n");
    }

    return 0;
}
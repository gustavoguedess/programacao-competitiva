#include <iostream>
using namespace std;


int digitos (int d){
    if(d == 0) return 1;
    int digitos=0;
    while(d){
        d = d / 10;
        digitos++;
    }
    return digitos;
}

int pot_10(int num){
    int pot = 1;
    for(int i=0; i<num; i++) pot *= 10;
    return pot;
}


int main(){
    int ncases, numero, d;
    scanf("%d", &ncases);
    while(ncases--){
        scanf("%d", &numero); 
        d = digitos(numero);
        printf("%d\n", numero - pot_10(d-1));
    }
    return 0;
}
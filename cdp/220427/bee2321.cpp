#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    int ax0, ay0, ax1, ay1;
    int bx0, by0, bx1, by1;
    
    cin >> ax0 >> ay0 >> ax1 >> ay1;
    cin >> bx0 >> by0 >> bx1 >> by1;
    
    if(ax0 <= bx1 && ay0<=by1 && bx0<=ax1 && by0<=ay1)
        printf("1\n");
    else printf("0\n");

}
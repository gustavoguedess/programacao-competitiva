#include <iostream>
using namespace std;
 
int main(){
    int t, sum;
    char m[2][2];
    char v[26];
    scanf("%d\n", &t);
    while(t--){
        sum = 0;
        for(int i = 0; i < 26; i++) v[i] = 0;
        scanf("%c%c\n", &m[0][0], &m[0][1]);
        scanf("%c%c\n", &m[1][0], &m[1][1]);
        v[m[0][0] - 'a'] = 1;
        v[m[0][1] - 'a'] = 1;
        v[m[1][0] - 'a'] = 1;
        v[m[1][1] - 'a'] = 1;
        for(int i = 0; i < 26; i++) sum += v[i];
        printf("%d\n", sum - 1); 
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char s[600];
    fgets(s, sizeof(s), stdin);
    printf("%s\n", strlen(s)-1>80?"NO":"YES");
}
#include <stdio.h>
#include<cstring>
#include<string.h>

using namespace std;

int main() {
	int t, i;
	int tam;
	char str[110], sai[110];
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		fgets(str, 110, stdin);
		tam=strlen(str);
		i=0;
		for(i=0; i<tam/2; i++)
		{
			sai[i]=str[tam/2-1-i];
			sai[i+tam/2]=str[tam-1-i];
		}
		sai[i+tam/2]=str[tam-1-i];
		sai[tam]=0;
		printf("%s\n", sai);
	}
	return 0;
}

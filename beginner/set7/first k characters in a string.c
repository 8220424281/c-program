#include<stdio.h>
#include<string.h>
int main()
{ int i,k;
	char s[100];
	gets(s);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}

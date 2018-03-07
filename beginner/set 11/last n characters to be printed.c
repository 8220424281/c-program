#include<stdio.h>
#include<string.h>
int main()
{ int i,k,l;
	char s[100];
	gets(s);
	l=strlen(s);
	scanf("%d",&k);
	for(i=l-k-1;i<l;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}

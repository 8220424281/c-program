#include<stdio.h>
#include<string.h>
int main()
{
	int i,l,flag=0;
	char s[1000];
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
	if(s[i]=='0'||s[i]=='1')
	{
            flag=1;
	}
	else
	{
	flag=0;
	}
	}
	if(flag==1)
	{
	printf("Yes");
	}
	else{
	printf("No");
	}

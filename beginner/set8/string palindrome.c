#include<stdio.h>
#include<string.h>
int main()
{int i,l,flag=0;
	char s[100];
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]!=s[l-1-i])
		{
		flag=1;
		break;
		}
	}
	if(flag==1)
	printf("No");
	else
	printf("Yes");
	return 0;
	
}

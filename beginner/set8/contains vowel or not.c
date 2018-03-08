#include<stdio.h>
#include<string.h>
int main()
{int i,l,flag=0;
	char s[100];
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
		{
		flag=1;
		break;
		}
	}
	if(flag==1)
	printf("Yes");
	else
	printf("No");
	return 0;
	
}

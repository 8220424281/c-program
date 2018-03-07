#include <stdio.h>
#include<string.h>
int main(void) {

	char s1[10],s2[10];
	int l1,l2;
	scanf("%s%s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1>l2)
	{
		printf("%s",s1);
	}
	else 
	{
		printf("%s",s2);
	}

	return 0;
}

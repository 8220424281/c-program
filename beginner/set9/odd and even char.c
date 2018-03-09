#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
	char s[100];
scanf("%s",s);
l=strlen(s);
for(i=1;i<l;i+=2)
{
printf("%c",s[i]);
}
for(i=0;i<l;i+=2){
printf("%c",s[i]);
}
	return 0;
	
}

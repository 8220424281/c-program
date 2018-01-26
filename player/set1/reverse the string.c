#include<stdio.h>
#include<string.h>
int main(void)
{
char s1[100],s2[100];
int i,l,j;
scanf("%[^\n]s",s1);
l=strlen(s1);
for(i=0;i<l;i++)
{
s2[i]=s1[l-i-1];
}
s2[l]='\0';
printf("%s\n",s2);
}

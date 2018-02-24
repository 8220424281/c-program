#include<stdio.h>
#include<string.h>
int main()
{
char s1[100];
int i,l,c=0;
scanf("%[^\n]s",s1);
l=strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]==' ')
   c++;
}
printf("%d",c);
return 0;
}

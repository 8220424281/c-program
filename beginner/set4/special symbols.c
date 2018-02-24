#include<stdio.h>
#include<string.h>
int main()
{
char s1[100];
int i,l,n=0;
scanf("%[^\n]s",s1);
l=strlen(s1);
for(i=0;i<l;i++)
{
if((s1[i]>=33&&s1[i]<=47)||(s1[i]>=58&&s1[i]<=64)||(s1[i]>=91&&s1[i]<=96)||(s1[i]>=123&&s1[i]<=126))
   n++;
}
printf("%d",n);
return 0;
}

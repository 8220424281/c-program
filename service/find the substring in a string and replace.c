#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	char s[100],ss[100][10];
	char r[10],d[10];
	scanf("%[^\n]s",s);
	scanf("%s",r);
	scanf("%s",d);
	int l,i,j=0,c=0;
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==' '||s[i]=='\0')
		{
		ss[c][j]='\0';
		j=0;
		c++;
		}
		else
		{
			ss[c][j]=s[i];
			j++;
		}
	}
	for(i=0;i<c;i++)
	{
		if(strcmp(ss[i],r)==0)
		{
			strcpy(ss[i],d);
		}
	}
	for(i=0;i<=c;i++)
	 {
   printf("%s ",ss[i]);
   }
	
	
	
	return 0;
}

#include<string.h>
int main(void) {
	int l,i,c;
	char s[100],s1;
	scanf("%[^\n]s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
	 s[0]=s[0]-32;
	 if(s[i]==' ')
	 {
	
	 s[i+1]=s[i+1]-32;
	 }
	}
	puts(s);
	return 0;
}

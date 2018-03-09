#include <stdio.h>
int main(void) {
int n1,n2,m,i;
scanf("%d%d",&n1,&n2);
if(n1>n2)
m=n2;
else
m=n1;
for(i=m;i>=1;i--)
{
	if(n1%i==0&&n2%i==0)
	{
	printf("%d",i);
	break;
	}
}
return 0;
}

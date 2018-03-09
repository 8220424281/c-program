#include <stdio.h>
int main(void) {
int N,K,a[100],i,flag=0;
scanf("%d%d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
if(K==a[i])
{
flag=1;
break;
}
}
if(flag==1)
{
	printf("Yes");
}
else
printf("No");

	return 0;
}

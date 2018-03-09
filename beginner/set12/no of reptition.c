#include <stdio.h>
int main(void) {
int N,K,a[100],i,c=0;
scanf("%d%d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
if(K==a[i])
{
c++;
}
}
printf("%d",c);
	return 0;
}

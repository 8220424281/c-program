#include <stdio.h>
int main(void) {
int N,K,a[100],i;
scanf("%d%d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
if(K==a[i])
{
printf("yes");
break;
}
}
return 0;
}

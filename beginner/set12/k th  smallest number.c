#include <stdio.h>
int main(void) {
int N,K,a[100],i,j,temp;
scanf("%d%d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<N;i++)
{
for(j=i+1;j<N;j++)
{
if(a[i]>a[j])
{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
}}
printf("%d",a[K-1]);


	return 0;
}

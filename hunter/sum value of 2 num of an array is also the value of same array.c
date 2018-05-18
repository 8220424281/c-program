#include <stdio.h>

int main(void) {
	
	int i,j,k,n,a[10],sum=0;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
	for(j=i+1;j<n;j++)
	{	
	sum=0;
	sum+=a[i]+a[j];
	for(k=0;k<n;k++)
	{
	if(sum==a[k]){
	printf("%d %d %d",a[i],a[j],a[k]);
	printf("\n");}
	}}}}	
       


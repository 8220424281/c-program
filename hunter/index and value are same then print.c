#include <stdio.h>

int main(void) {
	
	int i,j,n,arr[10],c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
	{
	if(arr[i]==i)
	{
	printf("%d ",i);
	c++;
	}}
	if(c==0)
	{
		printf("-1");
	}
}
	


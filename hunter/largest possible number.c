#include <stdio.h>

int main(void) {
	
	int i,j,n,arr[10],temp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(arr[i]<arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}}
	

	


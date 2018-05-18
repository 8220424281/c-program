#include <stdio.h>

int main(void) {
	
	int i,n,arr[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
	{
	
			if((arr[i]%2==0&&i%2!=0)||(arr[i]%2!=0&&i%2==0))
			{
		            printf("%d ",arr[i]);
			}				
	

}}


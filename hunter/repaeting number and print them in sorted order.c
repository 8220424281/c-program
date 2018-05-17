#include <stdio.h>

int main(void) {
	
	int i,j,n,arr[10],b[10],c=0,temp=0,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
		            b[i]=arr[i];
		            c++;
			}				
		}
	}
	for(i=0; i<c; i++)
	{
		for(j=i+1; j<c; j++)
		{
			if(b[i]>b[j])
			{
			          flag=1;
		            temp=b[i];
		            b[i]=b[j];
		            b[j]=temp;
			}				
		}
	}
	if(flag==1){
	for(i=0; i<c; i++)
	{
	printf("%d",b[i]);
	}}
	else
	printf("unique");
}


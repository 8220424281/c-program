#include <stdio.h>

int main(void) {
	
	int i,j,arr[10],ele,n,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	flag=1;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				ele=arr[j];
				flag=0;
				break;
			}				
		}
	}
	if(flag==0)
	printf("%d",ele);
	else
	printf("unique");
	return 0;
}

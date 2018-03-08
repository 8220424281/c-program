#include <stdio.h>
int main(void) {
	int a[100],MIN,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	MIN=a[0];
	for(i=0;i<n;i++)
	{
		
		if(MIN>a[i])
		{
		MIN=a[i];	
		}
		
	}
	printf("%d",MIN);
	return 0;
}

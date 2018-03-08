#include<stdio.h>
int main()
{
	int rem,n,product=1;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		product=product*rem;
		n=n/10;
	}
	printf("%d",product);
	return 0;
	
}

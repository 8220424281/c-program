#include <stdio.h>
int main(void) {
	int rem,sum=0,num,n;
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
	rem=num%10;
	sum=sum+(rem*rem*rem);
	num=num/10;
	}
	if(sum==n)
	printf("yes");
	else
	printf("no");
	return 0;
}

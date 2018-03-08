#include<stdio.h>
#include<string.h>
int main()
{
	int i,flag=0,start,end,num;
	scanf("%d%d%d",&start,&end,&num);
	for(i=start;i<=end;i++)
	{
	if(i==num)	
	{
		flag=1;
	}	
	}
	
	if(flag==1)
	printf("Yes");
	else
	printf("No");
	return 0;
	
}

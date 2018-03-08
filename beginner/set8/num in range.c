#include<stdio.h>
#include<string.h>
int main()
{
	int i,flag=0,L,R,N;
	scanf("%d%d%d",&L,&R,&N);
	for(i=L;i<=R;i++)
	{
	if(i==N)	
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

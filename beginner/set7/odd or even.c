#include<stdio.h>
int main()
{
	int N,M,SUM=0;
	scanf("%d%d",&N,&M);
	SUM=N+M;
	if(SUM%2==0)
	{
	printf("Even");	
	}
	else
	{
	printf("Odd");	
	}
}

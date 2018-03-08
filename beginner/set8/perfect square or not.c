#include<stdio.h>
int main()
{
	int i,n1,n2,flag=0,res;
	scanf("%d%d",&n1,&n2);
	res=n1*n2;
	for(i=1;i<=res;i++)
	{
	if(i*i==res)
	{
  flag=1;
	}}
	if(flag==1)
	printf("Yes");
	else
	printf("No");
	
            return 0;
	
}

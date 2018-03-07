#include<stdio.h>
int main()
{
	int n,m,sub;
	scanf("%d%d",&n,&m);
            sub=n-m;
            if(sub%2==0)
            printf("Even");
	else
	printf("Odd");
	return 0;
}

#include <stdio.h>
int main(void) {
	int n,p,r=1;
	scanf("%d%d",&n,&p);
	while(p!=0)
	{
	r=r*n;
	p--;
	}
	printf("%d",r);
	return 0;
}

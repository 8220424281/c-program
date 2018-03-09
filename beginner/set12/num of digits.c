#include <stdio.h>
int main(void) {
int n,i,rem,c;
scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	n=n/10;
c++;	
}printf("%d",c);

	return 0;
}

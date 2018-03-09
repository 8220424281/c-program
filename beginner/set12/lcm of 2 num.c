#include <stdio.h>
int main(void) {
int n1,n2,m,i,lcm=1;
scanf("%d%d",&n1,&n2);
if(n1>n2)
m=n2;
else
m=n1;
while(m!=0)
{
	if(m%n1==0&&m%n2==0){
	printf("%d",m);
		break;
	}
	m++;
}
return 0;
}

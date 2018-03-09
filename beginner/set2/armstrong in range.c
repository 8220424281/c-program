#include <stdio.h>
int main(void) {
int start,end,temp,rem,total=0;
scanf("%d%d",&start,&end);
while(start<=end)
{
temp=start;
while(start!=0){
rem=start%10;
total=total+rem*rem*rem;
start=start/10;}
if(temp==total)
{
	printf("%d",total);
}
start++;
}
return 0;
}

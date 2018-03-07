#include<stdio.h>
int main()
{
int f1=0,f2=1,n,i,sum=0;
scanf("%d",&n);
while(f2<=n)
{
sum=f1+f2;
printf("%d",f2);
f1=f2;
f2=sum;
}
return 0;
}

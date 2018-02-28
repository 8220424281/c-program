#include<stdio.h>
int main()
{
int f1,f2;
scanf("%d%d",&f1,&f2);
f1=f1^f2;
f2=f1^f2;
f1=f1^f2;
printf("%d %d",f1,f2);
return 0;
}

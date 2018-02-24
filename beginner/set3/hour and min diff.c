#include <stdio.h>
int main()
{
int min2,i,hr1,hr2,min1,hr3,min3;
scanf("%d%d\n%d%d",&hr1,&min1,&hr2,&min2);
hr3=hr1-hr2;
min3=min1-min2;
printf("%d %d",hr3,min3);
return 0;
}

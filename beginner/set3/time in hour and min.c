#include <stdio.h>
int main()
{
int min,i,hr,min1;
scanf("%d",&min);
hr=min/60;
min1=min%60;
printf("%d %d",hr,min1);
return 0;
}

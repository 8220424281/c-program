#include <stdio.h>
int main(void) {
int N,K,a[100],i,c=0,min;
scanf("%d%d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<N;i++)
{min=a[0];
if(min>a[i]){
min=a[i];
c++;
if(K==c)
printf("%d",a[i]);
}
}

	return 0;
}

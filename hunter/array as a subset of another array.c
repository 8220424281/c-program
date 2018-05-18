#include <stdio.h>
int main(void) {
	int i,j,n,m,a[100],b[100],t=0;
	scanf("%d%d",&n,&m);
	t=m;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0; i<m; i++)
	{
	for(j=0;j<n;j++)
	{
  if(b[i]==a[j])
	t--;
  }}
 if(t==0)
 printf("yes");
 else
 printf("no");
}

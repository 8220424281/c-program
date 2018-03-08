#include <stdio.h>

int main(void) {
int N,K,S=1;
scanf("%d%d",&N,&K);
while(K!=0)
{
S=N*S;
K--;
}
printf("%d",S);
	return 0;
}

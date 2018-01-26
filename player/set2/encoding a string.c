#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char ar[100];
    unsigned char x;
    int i,n,j,k;
    scanf("%d",&n);
    scanf("%s",ar);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        x=ar[i];
        if(x>=97 && x<=122)
        {
           x=x+(k%26);
           if(x>122){
               x=96+(x-122);
           }
           ar[i]=x;
        }
        else if(x>=65 && x<=90)
        {
           x=x+(k%26);
           if(x>90){
               x=64+(x-90);
           }
           ar[i]=x;
        }
    }
    printf("%s",ar);
return 0;
}

#include <stdio.h>

void main()
{
    int t, k, n, i=0;
     scanf("%d %d",&n,&k);
     while(t--){
         scanf("%d",&n);
         if(n%k==0){
             i++;
         }
     }
     printf("%d",i);
}
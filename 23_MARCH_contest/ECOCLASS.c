#include <stdio.h>

int main()
{
    int t,n,a[100],b[100];
    scanf("%d",&t);
    if(t>=1 && t<=10){
    while(t--){
        scanf("%d",&n);
       int k = 0;
    for(int i=0; i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
    scanf("%d",&b[i]);
    for(int i=0; i<n;i++){
        if(a[i]==b[i]){
        k++;
        }
    }
    printf("%d\n",k);
    }
    }
   return 0; 
}
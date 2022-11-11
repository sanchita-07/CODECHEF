#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,i;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0; i<n; i++){
            scanf("%lld",&a[i]);
        }
        long long int k=0,l=0,sum=0;
        for(i=0; i<n; i++){
            if(a[i]>0)
            k++;
            if(a[i]<0)
            l++;
        }
       long long int x = k*(k-1)/2;
       long long int y = l*(l-1)/2;
       sum = x + y;
        printf("%lld\n",sum);
    }
    return 0;
}
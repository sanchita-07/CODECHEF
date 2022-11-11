#include <stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int sum =0;
        int i=1;
        while(i<=n){
            if(i%2!=0)
                sum-=i;
                else
                sum+=i;
                i++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
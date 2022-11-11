#include <stdio.h>
#include <math.h>
int main()
{
    int t, n, sum = 0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",n);
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                if(i==(n/i))
                    sum += i;
                else
                sum += (i+ n/i);
            }
            printf("%d",sum+1);
        }
    }
    return 0;
}
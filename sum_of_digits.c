#include <stdio.h>

int main()
{
    int n,t,sum;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
            sum = 0;
        for(int i=n; n!=0;n=n/10){
            int m = n%10;
            sum +=m;
        }
        printf("%d",sum);
    }
    return 0;  
}
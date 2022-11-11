#include <stdio.h>

int main()
{
    int n,t,sum,m,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
            sum = 0;
            y = n;
            do{
                m=n%10;
            }
        while(n=n/10);
        sum = (y%10) + m;
        printf("%d\n",sum);
    }
    return 0;  
}